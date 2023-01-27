FROM python:alpine
RUN apk add --no-cache git
RUN git clone https://github.com/MeepWagon/PythonEmbedDemo.git app
# COPY . /app
WORKDIR /app

RUN apk add --no-cache cmake
RUN apk add --no-cache make
RUN apk add --no-cache g++

ENTRYPOINT cmake . && make && ./PythonEmbedDemo