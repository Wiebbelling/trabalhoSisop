# trabalhoSisop
Aquele trabalhinho onde a função CIdentify importa mais que o resto.

Criar: thread recebe um tid, recebe um estado = 0, recebe bilhete, recebe contexto, joga pra fila de Aptos, muda estado = 1
Filha de Aptos: dispatcher escolhe proxima thread, tem tid da thread, bilhete da thread tid
Dispatcher:gerar numero randomico (support.h), monitorar estado de execução
	Movimentar threads entre estados
Executando: monitorar estado de thread para join
Bloqueado: estado 3, fila de bloqueados = aptos, funções que recebem informações do dispatcher
Destruir: mudar estado em 4

Gera bilhete: tem uma funcao de geracao de numeros pseudo randomicos na support.o
Gera contexto: 

CCreatre: gerar tid, gerar contexto, ao terminar de criar
Cyield: salvar contexto da thread, manda pro dispatcher pra mudar estado e jogar pra aptos e dispatcher colocar outra thread em executando
Cjoin: salvar contexto da thread, parar exec da thread, coloca em fila de aptos, e associa o tid dela ao de outra thread q foi passada por parametro (lembrar de que pode dar erro)
Cwait: verifica disponibilidade do rescurso, associa tid ao recurso que esta esperando
CSignal: qdo thread termina de usar um recurso, avisa dispatcher passando primeira fila para apto, atualizar semaforo
CIdentify: grupinhoooooooooooooooooooooo


Divisão:
Rodrigo:
 Dispatcher: (Pseudo Uteis.c)
Movimentação de Threads; (-1)
Geração de numero randomico (para sorteio);
Procurar quem vai ser executado na Lista de aptos; (-2)
Monitoramento do Estado de Execução; (-3)
int cjoin(int tid);
int cyield(void);
Bhárbara: 
Main;
int ccreate (void *(*start)(void *), void *arg);
Jéssica: 
Semáforos:
int csem_init (csem_t *sem, int count);
int cwait (csem_t *sem);
int csignal (csem_t *sem);
int cidentify (char *name, int size);
