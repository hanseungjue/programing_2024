#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("input the second: ");
	scanf("%i",&a);
	b= a/60;
	c= a%60;
	printf("The time is %i : %i",b,c);
	return 0;
}
