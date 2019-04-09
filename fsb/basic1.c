#include <stdio.h>
#include <string.h>

#define size 128

int main(int argc, char *argv[]){
	char buffer[size] = {0,};
	if(argc != 2){
		printf("Usage: %s [string]\n", argv[0]);
		return 0;
	}

	else{
		strncpy(buffer, argv[1], size);
		printf(buffer);
	}

	return 1;
}
