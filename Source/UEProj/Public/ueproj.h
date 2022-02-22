#pragma once

#include <CoreMinimal.h>
#include <Modules/ModuleManager.h>

#include <proj.h>

class FUEProjModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:

};


