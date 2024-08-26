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
docker run -e DISPLAY=$DISPLAY \  # Partage l'affichage de l'hôte avec le conteneur
    -v /tmp/.X11-unix:/tmp/.X11-unix:rw \  # Monte le socket X11 pour l'interface graphique
    -v $HOME/.Xauthority:/root/.Xauthority:rw \  # Partage les autorisations X11
    -v /run/user/$(id -u)/pulse:/run/pulse \  # Monte le socket PulseAudio pour le son
    -e PULSE_SERVER=unix:/run/pulse/native \  # Configure le serveur PulseAudio
    --device /dev/snd \  # Donne accès aux périphériques audio
    --device /dev/input \  # Donne accès aux périphériques d'entrée (clavier, souris)
    --net=host \  # Utilise la pile réseau de l'hôte
    -it my_rpg  # Mode interactif et pseudo-TTY, lance l'image 'my_rpg'
