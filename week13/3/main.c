#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	int score;
};

int main(int argc, char *argv[]) {
	struct student s[STUDENTNUM];
	int sum = 0;
    int maxScore = 0;
    int maxIndex = 0;
	int i = 0;
	
    for (i = 0; i < STUDENTNUM; i++) {
        printf("Input the ID: ");
        scanf("%d", &s[i].ID);
        
		printf("Input the score: ");
        scanf("%d", &s[i].score);
        
        sum += s[i].score;

        if (s[i].score > maxScore) {
            maxScore = s[i].score;
            maxIndex = i;
        }
    }

    double average = (double)sum / STUDENTNUM;
    printf("The average of the score: %f\n", average);

    printf("THe Highest score - ID: %d, score: %d\n", s[maxIndex].ID, s[maxIndex].score);
	return 0;
}
