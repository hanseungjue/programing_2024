#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("input the year: ");
	scanf("%i",&a);
	if ( (a%4 == 0 && a%100 != 0) || a%400 == 0 )
	    b=1;
	else
	    b=0;
	    
	printf("Is this year %i the leap year? %i\n",a,b);
	return 0;
}
