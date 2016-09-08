jessica.c
#include <stdio.h>
#include <stdlib.h>
#include <support.h>

char *name = "Componentes do grupo:\nBharbara Cechin - 240430\nJessica Lorencetti - 228342\nRodrigo Wiebbelling - 242289\n"

int cidentify (char *name, int size){
	
	if (printf ("%s", &name) >= 0) // printf retorna a qtd de char que printou ou um codigo de erro < 0
		return 0;
	else 
		return -9;
	
}
typedef struct s_sem {
	
	int count; // indica se recurso está ocupado ou não (livre > 0, ocupado ≤ 0)
	PFILA2 fila; // ponteiro para uma fila de threads bloqueadas no semáforo.

} csem_t;

int csem_init (csem_t *sem, int count){
	
	malloc(sizeof(csem_t)); // aloca memoria para um semaforo
	
	sem.count = count; //count agora tem o numero de recursos desse mesmo tipo, que sao controlados pelo mesmo semaforo
	sem.fila = //inicializa a fila do semaforo como vazia
	return 0;
	//return -4 // erro
	
}

int cwait (csem_t *sem){
	
	sem.count --; //sempre decrementa o count
	if(sem.count > 0)
		//existe recurso livre, atribui o recurso a thread
	else
		// senao coloca a thread na fila de espera do semaforo
		//e thread.status = 3 (bloqueado)
		
	return 0;
	//return -5; erro
}

int csignal (csem_t *sem){
	
	sem.count ++; //sempre incrementa o count
	if (sem.count > 0)
		//if (sem.fila =! vazio)
			// procura na fila qual a proxima thread a usar o recurso (politica FIFO)
			// chama o dispatcher para mandar a thread para a fila de aptos e trocar o status dela
			// tira o ponteiro da thread da fila do semaforo
		// else //nada, nao ha mais threads que estejam esperando por esse recurso
	else 
		return -6; //erro, alguem esta usando recurso indisponivel
	
	return 0;
}