FROM ubuntu:22.04

RUN apt-get update  && apt-get upgrade -y && \
    apt-get install -y wget curl make gcc lbzip2 sudo

# setup working directory
RUN mkdir -p /usr/app
WORKDIR /usr/app
COPY . .

# install csfml dependancies
RUN chmod u+x install_csfml.sh && ./install_csfml.sh -y

ENV DISPLAY=:0
RUN make

CMD ["./my_rpg"]