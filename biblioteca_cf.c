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
     return 1; // a primeira string � maior
   else if((*rhs) && (!*lhs))
     return -1; // a primeira string � menor que a segunda

};

char * my_strchr( char *str, char ch ){

  while (*(str) != '\0') {
    if (*str == ch) {
      return str;
      }
    str++;
    //Precisamos corrigir
    //Precisa do retorno quando NULL quando n�o encontrado

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
  printf("\n valor de aux %d \n", aux);
  int countChars = aux;
  // normaliza��o da string de entrada, garantindo que ela
  // termine com o token. Criada c�pia de trabalho em copy
  if (src[aux-1] != token) {
    copy = (char *) malloc( (aux+2) * sizeof(char));
    memcpy(copy, src, aux*sizeof(char));
    copy[aux] = '#';
    copy[aux+1] = '\0';
    printf("\n copia 1: %s \n", copy);
  } else {
    copy = (char *) malloc( (aux+1) * sizeof(char));
    memcpy(copy, src, aux*sizeof(char));
    copy[aux] = '\0';
    printf("\n copia 2: %s \n", copy);
    aux--;
  }
  aux = 0;

  // Contagem do n�mero de tokens existentes
  while(copy[aux] != '\0') {
    if (copy[aux] == token) {
      countTokens++;
    }
    aux++;
  }
  // cria��o do vetor tempor�rio, com tamanho igual ao 
  // n�mero de tokens encontrados, +1
//  char * vetor[countTokens+1];
  char ** vetor = (char **) malloc((countTokens+1) * sizeof(char *));
  aux = 0;
  
  
//  
  int stringSize = 0;
  int lastCharIndex = 0;
  int count = 0;
  char * temp = NULL;
  
//  *vetor = (char *) malloc(5 * sizeof(char));
//  temp = &(*vetor);
//  *temp = "tet\0";
  
  
  while(copy[aux] != '\0') {
    if (copy[aux] == token && aux != 0) {
      *vetor = (char *) malloc((stringSize+1) * sizeof(char));
      temp = *vetor;
      memcpy(temp, &copy[lastCharIndex], (stringSize+1) * sizeof(char) );
      temp[stringSize] = '\0';
      memcpy(*vetor, temp, (stringSize+1) * sizeof(char) );
      stringSize = 0;
      vetor++;
      count++;
    } else {
      if (stringSize == 0) {
        lastCharIndex = aux;
      }
      stringSize++;
    }
    aux++;
  }
  *vetor = (char *) malloc(sizeof(char));
  *vetor = token;
  while (count > 0) {
    vetor--;
    count--;
  }

  return vetor;
}
