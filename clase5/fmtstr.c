#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
	imprime(*(argv+1));
}

void imprime(char *cadena){
	printf(cadena);
}