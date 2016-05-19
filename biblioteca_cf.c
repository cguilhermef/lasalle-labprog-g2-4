#include <stdio.h>
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
