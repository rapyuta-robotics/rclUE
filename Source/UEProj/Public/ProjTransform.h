#pragma once

#include <Components/ActorComponent.h>
#include <CoreMinimal.h>

#include "proj.h"

#include "ProjTransform.generated.h"


USTRUCT(Blueprintable)
struct UEPROJ_API FGeographicCoordinate
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float latitude;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float longitude;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float altitude;
};

UCLASS(ClassGroup = (Custom), Blueprintable, meta = (BlueprintSpawnableComponent))
class UEPROJ_API UProjTransform : public UActorComponent
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString SourceCRS = "+proj=utm +zone=56H +datum=WGS84";

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString TargetCRS = "EPSG:4326";

    UFUNCTION(BlueprintPure, Category="Transforms")
    FGeographicCoordinate TransformToGeographic(const FVector& ProjectedCoords) {
        // input is PJ_ENU (easting northing up)
        PJ_COORD a = proj_coord(ProjectedCoords.X, ProjectedCoords.Y, ProjectedCoords.Z, 0);
        PJ_COORD b = proj_trans(proj_transform_obj, PJ_FWD, a);

        FGeographicCoordinate out;
        // https://proj.org/development/reference/datatypes.html#c.PJ_LPZ
        out.longitude = b.lp.lam;
        out.latitude = b.lp.phi;
        // out.altitude = b.lp.z;

        return out;
    };

    UFUNCTION(BlueprintPure, Category="Transforms")
    FVector TransformToProjected(const FGeographicCoordinate& GeographicCoords) {
        // Apparently when using EPSG identifiers/WGS84 the order is latitude/longitude
        PJ_COORD a = proj_coord(GeographicCoords.latitude, GeographicCoords.longitude, GeographicCoords.altitude, 0);
        PJ_COORD b = proj_trans(proj_transform_obj, PJ_FWD, a);

        FVector out;
        out.X = b.enu.e;
        out.Y = b.enu.n;
        out.Z = b.enu.u;

        return out;
    };

protected:
    virtual void BeginPlay() override {
        proj_context = proj_context_create();
        proj_transform_obj = proj_create_crs_to_crs(proj_context,
            TCHAR_TO_ANSI(*SourceCRS), TCHAR_TO_ANSI(*TargetCRS), NULL);
        Super::BeginPlay();
    };

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override {
        proj_destroy(proj_transform_obj);
        proj_context_destroy(proj_context);
        Super::EndPlay(EndPlayReason);
    };

private:
    PJ_CONTEXT *proj_context;
    PJ *proj_transform_obj;
};
