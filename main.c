#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_cf.h"

int main() {
  
  char teste[100] = "este eh um teste\0";
  //Adicionado um comentário apenas para gerar alteração
  char * ptr_ch = NULL;
  
  ptr_ch = my_strchr(teste, 't');
  
  while(*ptr_ch != '\0') {
    printf("%c", *ptr_ch);
    ptr_ch++;
  }
  
  return 0;
}
