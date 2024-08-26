#!/bin/bash

# Build the image
docker build -t my_rpg .

# Get IP address of the host
IP=$(hostname -I | awk '{print $1}')

# Print IP address
echo "IP: $IP"

# Allow connections to X server
xhost +local:docker

# Run the container
docker run -e DISPLAY=$DISPLAY \
    -v /tmp/.X11-unix:/tmp/.X11-unix:rw \
    -v $HOME/.Xauthority:/root/.Xauthority:rw \
    -v /run/user/$(id -u)/pulse:/run/pulse \
    -e PULSE_SERVER=unix:/run/pulse/native \
    --device /dev/snd \
    --device /dev/input \
    --net=host \
    -it my_rpg
