#include <stdio.h>
#define MAX 50

int main(){
    char palavra[MAX+1];//string onde sera digitado
    scanf(" %[^\n]", palavra);
    for(int i = MAX; i >= 0; i--){//inverte o conteudovetor de string
        printf("%c", palavra[i]);
    }
}
