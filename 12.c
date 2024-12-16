#include <stdio.h>
#include <stdlib.h>

int ten(int *vetor, int tam){
    
    if(tam <= 1){
        return 0;
    }
    
    if(vetor[tam - 1] == 10 * vetor[tam - 2]){
        return 1;
    }
    
    return ten(vetor, tam-1);
}



int main()
{
    int t, num, i, j;
    
    scanf("%d", &t);
    
    for(i = 0; i < t; i++){
        
        int tam;
        
        scanf("%d", &tam);
        
        int *vetor = malloc(tam * sizeof(int));
        
        for(j = 0; j < tam; j++){
            scanf("%d", &vetor[j]);
        }
        

        
            if (ten(vetor, tam)) {
            printf("VERDADEIRO\n");
        } else {
            printf("FALSO\n");
        }
    }
    
    

    return 0;
}
