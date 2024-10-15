#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=50;
	int x;
	int a=0;
	
	do
	{
		printf("Guess a number: ");
		scanf("%d",&x);
		if(x<answer)
		    printf("Low!\n");
		else if(x>answer)
		    printf("High!\n");
		a++;
	}
	while(x!=answer);
	
	printf("Congratulation! Trials: %d",a);
	return 0;
}
