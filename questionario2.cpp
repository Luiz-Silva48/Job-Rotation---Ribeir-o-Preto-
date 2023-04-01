#include <stdio.h>

int main(){
    int entrd; //numero que vai analisado
    int result = 1; //somar os dois numeros anteriores 
    int ant = 1; //numero anterior 1
    int prox = 1; //numero antrior 2
    printf("Digite o número a ser analisado: ");
    scanf("%d",&entrd);
for(int i = 0; i <= entrd; i++){//calcular a soma de fibonacci até  encontrar o numero ou  terminar a condição do for
    if(i >= 0){
        if(entrd == result || entrd == 0){//condição para encerrar o codigo se o numero for encontrado
            printf("Pertence a sequencia de Fibonacci.");
            return 0;
        }
        result = ant + prox;
        ant = prox;
        prox = result;
    }
}
printf("Não pertence a sequencia de Fibonacci.");//condição final caso o for não encontre o numero na sequencia de fibonacci
return 0;
}