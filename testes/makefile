# André Dexheimer Carneiro
# 00243653

# makefile para a geração dos programas de teste 


CC=gcc
LIB_DIR=../lib/
INC_DIR=../include/
BIN_DIR=../bin/
SRC_DIR=../src/
TST_DIR=../testes/


all: cthread	#gera a biblioteca libcthread.a

	ar crs libcthread.a $(BIN_DIR)cthread.o $(BIN_DIR)fila2.o
	mv libcthread.a $(LIB_DIR)


cthread:	#gera o arquivo objeto do cthread.c

	$(CC) -c $(SRC_DIR)cthread.c -Wall
	mv cthread.o $(BIN_DIR) 	


1teste:	

	$(CC) -o 1teste_thread 1teste_thread.c -L$(LIB_DIR) -lcthread -Wall


2teste:

	$(CC) -o 2teste_thread 2teste_thread.c -L$(LIB_DIR) -lcthread -Wall

3teste:

	$(CC) -o 3teste_thread 3teste_thread.c -L$(LIB_DIR) -lcthread -Wall

clean:		#apaga tudo nos diretórios LIB e BIN

	rm $(BIN_DIR)cthread.o
	rm $(LIB_DIR)*


#MODIFICAÇÕES PARA A APRESENTAÇÃO:

# Foram adicionadas as regras "all", "cthread" e "clean" e adicionados os caminhos aos diretórios utilizados por essas regras
# Foi removida a linha que executava os programas teste logo após a sua geração
