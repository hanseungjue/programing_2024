#include <stdio.h>
#include <stdlib.h>

// ����ü ����
struct student {
    int ID;
    char name[10];
    double grade;
};

int main(int argc, char *argv[]) {
    struct student s = {24, "Eunju", 4.2};

    printf("Enter ID: ");
    scanf("%d", &s.ID);

    printf("Enter name: ");
    scanf("%s", &s.name);  

    printf("Enter grade: ");
    scanf("%lf", &s.grade); 

    printf("student information - ID : %d Name : %s Grade : %f", s.ID, s.name, s.grade);

    return 0;
}

