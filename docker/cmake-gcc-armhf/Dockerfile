FROM debian:stretch
MAINTAINER dockslim

ENV DEBIAN_FRONTEND noninteractive
RUN apt-get update && \
    apt-get install -y apt-utils && \
    apt-get install -y libc6-armhf-cross libc-dev-armhf-cross binutils-arm-linux-gnueabihf gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf make dpkg-dev ninja-build cmake

