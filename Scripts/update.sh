for L in $(ls -d -- */)
do
#    echo $L
    rm -rf $L
    cp -r ~/Rapyuta/ROS2/install/$L .
    rm -r $L/share
done