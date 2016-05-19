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

void my_strtok(char * src, char * dest, char token) {
  if (!token) {
    dest = NULL;
    return;
  }
  int countTokens = 0;
  int aux = 0;
  int auxIn = 0;
  int stringSize = 0;
  while (src[aux] != '\0') {
    if (src[aux] == token ) {
      countTokens++;
    }
    aux++;
  }
  
  dest = (char *) malloc(countTokens+1);
  
  aux = 0;
  while(src[aux] != '\0') {
    if (src[aux] == token) {
      *dest = (char *) malloc(stringSize+1);
      stringSize = 0;
      dest++;
    } else {
      stringSize++;
    }
    aux++;
  }
  while(aux > 0) {
    dest--;
    aux--;
  }
  stringSize = 0;
  while(src[aux] != '\0') {
    if (src[aux] == token) {
      *dest++;
      *dest = '\0';
      dest++;
      stringSize = 0;
    } else {
      *dest++;
      *dest = src[aux];
      stringSize++;
    }
    aux++;
  }
  dest++;
  *dest = NULL;
  
//  printf("N tokens: %d", cou);
}
