# GCC support can be specified at major, minor, or micro version
# (e.g. 8, 8.2 or 8.2.0).
# See https://hub.docker.com/r/library/gcc/ for all supported GCC
# tags from Docker Hub.
# See https://docs.docker.com/samples/library/gcc/ for more on how to use this image
FROM gcc:latest

# Instala dependências necessárias
RUN apt-get update && apt-get install -y \
    cmake \
    make \
    && rm -rf /var/lib/apt/lists/*

# Copia o código fonte e outros arquivos necessários
COPY . /usr/src/supertrunfo
WORKDIR /usr/src/supertrunfo

# Compila o aplicativo
RUN gcc -o supertrunfo CartasSuperTrunfo.c

# Define o comando para rodar o aplicativo
CMD ["./supertrunfo"]

LABEL Name=supertrunfo Version=0.0.1
