# Colocar nomes

# makefile para a geração da biblioteca (libcthread.a) e limpeza dos diretórios bin/ e lib/


CC=gcc
LIB_DIR=lib/
INC_DIR=include/
BIN_DIR=bin/
SRC_DIR=src/


all: cthread	#gera a biblioteca libcthread.a

	ar crs libcthread.a $(BIN_DIR)cthread.o $(BIN_DIR)support.o
	mv libcthread.a $(LIB_DIR)


cthread:	#gera o arquivo objeto do cthread.c

	$(CC) -c $(SRC_DIR)cthread.c -Wall
	mv cthread.o $(BIN_DIR) 


clean:		#apaga tudo nos diretórios LIB e BIN

	rm $(BIN_DIR)cthread.o
	rm $(LIB_DIR)*
