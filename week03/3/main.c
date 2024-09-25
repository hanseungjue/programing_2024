#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char text;
	
	printf("enter a character ; ");
	scanf("%c", &text);
	
	printf("The next charater of %c (%d) is %c (%d)\n" , text, text, text+1, text+1);
	return 0;
}
