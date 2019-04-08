#include <stdio.h>
#include <string.h>

void bug(char *arg1){
	char name[128];
	strcpy(name,arg1);
	printf("Hello %s\n", name);
}

int main(int argc, char **argv){
	if(argc < 2){
		printf("Usage: %s <your_name>\n", argv[0]);
		return 0;
	}
	bug(argv[1]);
	return 0;
}

//gcc -o -m32 -fno-pic -fno-stack-protector
//dir de libc f7dc8000

//dir de  system: 0xf7e04c70 

//dir de exit: 0xf7df7ed0 

// dir relativa de bin/sh: 17b808 

//payload = junk + dirsystem + direxit + dirbinsh