FROM gcc

COPY src /home/relator/src
COPY cuentos /home/relator/cuentos

WORKDIR /home/relator/src

RUN make

CMD ["./relator","/home/relator/cuentos/cuento.txt"]
