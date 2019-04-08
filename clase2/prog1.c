
#include <stdio.h>

void funcion_B(){
	char arregloB[10];
}

void funcion_A(){
	char arregloA[10];
	funcion_B(0x1234);
}

int main(){
	funcion_A();
}
