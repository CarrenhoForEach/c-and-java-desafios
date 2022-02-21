#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int fatorial(int fat)
{
   int resultado = 1;
   while(fat>=1){
   resultado = resultado*fat;
   fat--;
   }
   return resultado;
   }


int main()
{
  char palavra[256],PalavarAux[256];
  int contador=0,Repetidos=0,tamanho=0,j=0,i=0,comp=0;  

  printf("Digite uma Palavra: \n");
  gets(palavra);
  strcpy(PalavarAux, palavra);

  tamanho=strlen(palavra);

  for(i=0;i<=tamanho;i++)
  { Repetidos=0;
    for(j=0;j<=tamanho;j++)

        {       


           if (palavra == PalavarAux[j]){
            Repetidos++;
           }
{

            if(Repetidos == 2)
            {
            Repetidos=0;
            contador++;
            i++;
            j=0;
            }

       }
    }
  }
if(contador == 0)
   printf("%d",(fatorial(tamanho)));
else
    printf("%d",(fatorial(tamanho)/fatorial(contador)));
  return 0;
}