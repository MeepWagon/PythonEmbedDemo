FROM python:alpine
RUN mkdir /app
WORKDIR /app

RUN apk add --no-cache git
RUN apk add --no-cache cmake
RUN apk add --no-cache make
RUN apk add --no-cache g++

ENTRYPOINT git clone https://github.com/MeepWagon/PythonEmbedDemo.git && cd PythonEmbedDemo && cmake . && make && ./PythonEmbedDemo