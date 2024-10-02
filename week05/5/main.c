#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int a,b,c,d,e;
	printf("Input two integers: ");
	scanf("%i %i",&i,&j);
	
	a=i&j;
	printf("& result is: %i\n",a);
	
	b=i|j;
	printf("| result is: %i\n",b);
	
	c=i^j;
	printf("^ result is: %i\n",c);
	
	d=i<<1;
	printf("<<1 result is: %i\n",d);
	
	e=i>>1;
	printf(">>1 result is: %i",e);
	return 0;
}
