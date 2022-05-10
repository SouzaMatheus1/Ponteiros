#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50],sexo[9];
    float rendimentos;
}pessoa;

int main(){
    int *v;
    int quant;
    
    printf("Quantas pessoas serao cadastradas: ");
    scanf("%d", &quant);
    
    v = (int *) malloc(quant * sizeof(int));
    
    pessoa p[quant];
    
    for(int i=0;i<quant;i++){
        printf("Serao cadastradas %d pessoas!", quant);
        
        printf("\nDigite o nome da pessoa.....: ");
        fflush(stdin);
        fgets(p[i].nome, 50, stdin);
        
        printf("Digite o sexo......: ");
        fflush(stdin);
        fgets(p[i].sexo, 9, stdin);
        
        printf("Digite os rendimentos: ");
        scanf("%f", &p[i].rendimentos);
        
        free(v);
    }
}
