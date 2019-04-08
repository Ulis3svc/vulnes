#include <stdio.h>

int main(int argc, char **argv){
	char *addr;
	addr = getenv(argv[1]);
	printf("%s está en %p\n", argv[1],addr);
}