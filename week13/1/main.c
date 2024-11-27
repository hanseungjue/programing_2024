#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
    int ID;
    char name[10];
    double grade;
};
int main(int argc, char *argv[]) {
	struct student s = {24, "Eunju",4.2};
    s.ID = 123456;
    strcpy(s.name, "sia");
    s.grade = 4.2;
    printf("ID : %d\n", s.ID);
    printf("name : %s\n", s.name);
    printf("grade : %f\n", s.grade);
	return 0;
}
