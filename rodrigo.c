//rodrigo.c

int cjoin(int tid)
{
	/* Associa uma thread a outra para espera
	Em caso de sucesso
	*/	
}
int cyield(void)
{
	/*Trava a thread que chamou a função e solicita um novo numro randomico para colocar uma nova thread em execução*/
}

int movimentaThread(int tid, int status)
{
	/* Recebe uma thread e um status, atualiza o status da thread, 
	tirando ela de sua antiga fila e a colocando na nova fila respectiva ao status 
	Em caso de erro, retorna -1, em caso de sucesso, retorna 0*/
}

int buscaThreadApta(int numero)
{
	/* Recebe um numero randomico e busca na fila de aptos, a trhead
	dona deste numero, caso encontre ela, coloca ela no estado de executando retornando 0,
	caso contrario, retorna -2*/
}

int threadFinalizada(int tid)
{
	/* Recebe um identificar de thread e busca thread na fila de bloqueados que esteja associada
	a esta trad por meio do cjoin*/
}