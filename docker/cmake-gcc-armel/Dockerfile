FROM debian:stretch
MAINTAINER dockslim

ENV DEBIAN_FRONTEND noninteractive
RUN apt-get update && \
    apt-get install -y apt-utils && \
    apt-get install -y build-essential ninja-build cmake && \
    apt-get install -y libc6-armel-cross libc-dev-armel-cross binutils-arm-linux-gnueabi gcc-arm-linux-gnueabi g++-arm-linux-gnueabi
