#include <stdio.h>

int main ()
{
int linha, coluna, l, a, car, cont;
  cont=115;

  do{
    printf ("Olá, meu nome é Gustavo e o meu retângulo ficou assim, mas antes..");

    printf("\nQual o caracter desejado?");
    car = getchar();
  
  do
  {
    printf("\nQual a largura do retângulo? ");
    scanf("%d",&l);
  }while (l<=0);

  do
  {
    printf("Qual a altura do retângulo? ");
    scanf("%d",&a);
  }while (a<=0);
  
  
  for(coluna=1;coluna<=a;coluna++){
  
    for(linha=1;linha<=l;linha++)
  
       if(linha==1 || linha==l || coluna==1 || coluna==a)
  
      printf("%c", car);
  
       else
          printf(" ");
  
          printf("\n");
      } 
        
        printf("Deseja continuar?(s = novo caracter/n = digite 2)?\n");
        scanf("%d", &cont);
   
    
  } while(cont==115);
   return 0;
}
