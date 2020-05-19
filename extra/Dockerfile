FROM ubuntu:18.04

RUN apt-get update -y && apt-get upgrade -y && apt-get install -y git gcc make
RUN cd /home && git clone https://github.com/0zc4r1n/relatordecuentos.git

WORKDIR /home/relatordecuentos/src

RUN make

CMD ["./relator","/home/relatordecuentos/cuentos/cuento.txt"]

