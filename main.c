#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i=365;
	int* ptr=&i;
	
	printf("i 주소: %i\n", &i);
	printf("i 값 :%i\n",i);
	
	printf("ptr 주소: %i\n", ptr);
	printf("ptr 값: %i\n", *ptr);
	return 0;
}
