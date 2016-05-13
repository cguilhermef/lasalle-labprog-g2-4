#include <stdio.h>
#include "biblioteca_cf.h"

int my_strcmp( char *lhs, char *rhs ){};
char * my_strchr( char *str, char ch ){
  while (*(str) != '\0') {
    if (*str == ch) {
      return str;
    }
    str++;
  }
};
char * my_strstr( char* str, char* substr ){};
void my_strcat( char *dest, char *src ){};
