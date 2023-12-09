FROM ubuntu:22.04

RUN apt-get update -y && apt-get install -y g++ cmake

WORKDIR /home/app

COPY . /home/app

RUN cmake -S . -B build && cmake --build build && cmake --install build --prefix /usr/local

#ENTRYPOINT ["gof-patterns"]
