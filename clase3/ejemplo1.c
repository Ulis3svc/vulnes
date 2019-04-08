/*
 * -mpreferred-stack-boundary=2 -fno-stack-protector -ggdb
 */
#include<stdio.h>
#include<string.h>
saludo(char* uno,char* dos)
{
  char n[400];
  strcpy(n,dos);
  printf("Holaa %s %s\n", uno,n);
}
main(int argc,char **argv)
{
  saludo(*(argv+1),*(argv+2));
  printf("Ciao %s %s\n",*(argv+1),*(argv+2));
}
