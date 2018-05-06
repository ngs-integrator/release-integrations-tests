FROM debian:9.0

COPY build/testapp /usr/bin

RUN apt-get update -y && apt-get upgrade -y
