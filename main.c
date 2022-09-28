#include <stdio.h> //testar debug com esse código
#include <stdlib.h>
#include <time.h>
int main() {
    int i, aleatorio;
    srand( time(NULL) ); //semente do numero aleatório
    for(i=1 ; i <= 10 ; i++){
	    aleatorio = rand()%10;
	    printf("Numero %d: %d\n",i, aleatorio); //gera números de 0 a 9
      
    }
    printf("Imprimindo");
    printf("\ntchau!!");
    return 0;
}