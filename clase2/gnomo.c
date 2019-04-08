#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char buf[24];
int main(int argc, char **argv, char **envp){
  int fd=atoi(*(argv+1))-0x1234;
  read(fd,buf,24);
  if(!strcmp("GNOMO\n", buf)){
    printf(":D\n");
  }
  printf(":'v\n");
  return 0;

}