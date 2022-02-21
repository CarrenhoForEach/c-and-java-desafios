#include <stdio.h>


int main(){
    int altura_base, i, j;
        
    printf("Digite o número: ");
    scanf("%d", &altura_base);

    for(i = 1; i<= altura_base; i++){
        for(j= altura_base - i; j >= 1; j--)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    
    }  
    return 3;  
}