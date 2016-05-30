#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_cf.h"

int my_strcmp( char *lhs, char *rhs ){

   while((*lhs == *rhs) && (*lhs)){
     lhs++;
     rhs++;
   }

   if((*lhs == *rhs) && (!*lhs))
     return 0; // strings iguais
   else if((*lhs) && (!*rhs))
     return 1; // a primeira string é maior
   else if((*rhs) && (!*lhs))
     return -1; // a primeira string é menor que a segunda

};

char * my_strchr( char *str, char ch ){

  while (*(str) != '\0') {
    if (*str == ch) {
      return str;
      }
    str++;
    //Precisamos corrigir
    //Precisa do retorno quando NULL quando não encontrado

  }
};
char * my_strstr( char* str, char* substr ){};
//teste update git, adicionado apenas um comentario


char * my_strcat( char *dest, char *src ){
// um ponteiro para a string de destino
  char *orig = dest;

  // vai para o final da string de destino
  while(*orig)
    orig++;

  // anexa a string de origem
  while(*orig++ = *src++)
    ;

  // retorna o resultado
  return dest;
};

char * my_strtok(char * src, char token) {
  int aux = 0;
  int aux2 = 0;
  int countTokens = 0;
  char * copy = NULL;
  
  // contagem de caracteres da string de entrada
  while(src[aux] != '\0') {
    aux++;
  }
  int countChars = aux-1;
  // normalização da string de entrada, garantindo que ela
  // termine com o token. Criada cópia de trabalho em copy
  if (src[aux-1] != token) {
    printf("\n aqui \n");
    copy = (char *) malloc( (aux+1) * sizeof(char));
    memcpy(copy, src, aux*sizeof(char));
    copy[aux] = '#';
    copy[aux+1] = '\0';
  } else {
    copy = (char *) malloc( aux * sizeof(char));
    memcpy(copy, src, aux*sizeof(char));
    copy[aux] = '\0';
    aux--;
  }
  aux = 0;
  printf("%s", copy);

  // Contagem do número de tokens existentes
  while(copy[aux] != '\0') {
    if (copy[aux] == token) {
      countTokens++;
    }
    aux++;
  }
  // criação do vetor temporário, com tamanho igual ao 
  // número de tokens encontrados, +1
  char * vetor[countTokens+1];
  aux = 0;
  
  int stringSize = 0;
  int lastCharIndex = 0;
  int count = 0;
  char * temp = NULL;
  
  while(copy[aux] != '\0') {
    if (copy[aux] == token && aux != 0) {
      vetor[count] = (char *) malloc((stringSize) * sizeof(char));
      temp = vetor[count];
      memcpy(temp, &copy[lastCharIndex], (stringSize) * sizeof(char) );
      temp[stringSize] = '\0';
      vetor[count] = temp;
      printf("\n-%s-", vetor[count]);
      stringSize = 0;
      count++;
    } else {
      if (stringSize == 0) {
        lastCharIndex = aux;
      }
      stringSize++;
    }
    aux++;
  }
  vetor[count] = token;
  
  return vetor;
}
