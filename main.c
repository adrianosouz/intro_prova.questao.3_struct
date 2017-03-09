#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char n[50];
    int ID;
} Cadastro;

int main()
{
    int i;
    Cadastro *c;/*ponteiro tipo Cadastro para receber o endereco inicial do espaco alocado*/
    c =(Cadastro*)malloc(sizeof(int)*5);/*c armazena o endereco inicial de uma area continua
                                       de memoria suficiente para armazenar o tamanho alocado*/
                                        /*a funcao malloc e usada para alocar espaco para armazenar valores de qualquer tipo*/
    for(i=0; i<5; i++)
    {

        printf("Informe o nome[%d]\n",i+1);
        scanf("%s",(c+i)->n);/*Com o operador '->' acessamos um campo específico de uma estrutura*/
        printf("Informe o ID[%d]\n",i+1);
        scanf("%d",&(c+i)->ID);


    }
    for(i=0; i<5; i++)
    {
        printf("PESSOA %d:%s,ID:%d\n",i+1,(c+i)->n,(c+i)->ID);
    }
    return 0;
}
