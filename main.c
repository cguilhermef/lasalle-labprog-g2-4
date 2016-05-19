#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_cf.h"

int main()
{

    char teste[100] = "este eh um teste\0";
    //Adicionado um comentário apenas para gerar alteração
    char * ptr_ch = NULL;

    ptr_ch = my_strchr(teste, 'h');

    while(*ptr_ch != '\0')
    {
        printf("%c", *ptr_ch);
        ptr_ch++;
    }

    printf("\n\n");


    //Teste função my_strcmp

    char frase3[] = "ola";
    char frase4[] = "ola";

    printf("Teste de funcao strcmp.\n\n");
    if(my_strcmp(frase3, frase4)==0)
        printf("As palavras sao Iguais \n");
    else if (my_strcmp(frase3, frase4)<0)
        printf("A primeira string e menor que a segunda.\n");
    else if(my_strcmp(frase3, frase4)>0)
        printf("A primeira string e Maior que a segunda.\n");

    //Teste de funcao strcat
    char frase1[100] = "\nTeste de";
    char frase2[20] = " funcao strcat.";
    char *resultado = my_strcat(frase1, frase2);

    // exibe o resultado
    printf("%s\n\n", resultado);
    
    
//    char srcTeste[] = "Hoje#o#dia#esta#chuvoso!";
//    char * dest;
//    my_strtok(srcTeste, dest, '#');
//    int a = 0;
//    while(a < 4) {
//      printf("\n %s", *dest);
//      dest++;
//      a++;
//    }
    
      int * dest;
      dest = (int *) malloc(4*sizeof(int));
      *dest = (char *) malloc(8*sizeof(char));
      *dest = "opa\0";
      dest++;
      *dest = (char *) malloc(8*sizeof(char));
      *dest = "ola\0";  
      dest--;
      printf("\n%s", *dest);
      dest++;
      printf("\n%s", *dest);
      
      
//    char * dest;
//    
//    dest = (char * )malloc(4*sizeof(int));
//    (*dest) = (char *)malloc(8*sizeof(char));
//    dest = (char *)malloc(4*sizeof(char));
//    *dest = "\0";
//    *dest = "abcd5678\0";
//    printf("-> %s", *dest);
    return 0;
}
