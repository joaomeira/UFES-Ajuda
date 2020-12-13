/*****************************
* CRIADO: João Victor
* DESCRICAO: Como fazer insersão de strcut em struct com tipo VOID
******************************/

#include <stdio.h>
#include <stdlib.h>


/* Com este tipo de estrutura você pode receber qualuer informação
pois ela utiliza tipo generico, assim qualquer tipo *(Ponteiro) pode
ser passado através de uma cath posteriormente pode ser lido */
typedef struct comVOID
{
    void * info; 
}cV;

/* Estutura comum */
typedef struct semVOID
{
    int num;
}sV;

int main()
{
    cV passagem;
    sV * info;
    int ajudaImprimir;

    info = (sV *) malloc (sizeof(sV)); //Aloca espaço em memoria para preencher estrutura
    info->num = 10; //Num recebe 10

    passagem.info = info; //Armazena informações da estrutura sV info em passagem
    
    ajudaImprimir = ((sV*)passagem.info)->num; //Catch em passagem.info reconhecendo ele como estrutura sV*
    //Em seguida ->num para informar a variavel a ser passada
    
    printf("%i",ajudaImprimir);
    
    return 1;
}