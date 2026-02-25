#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char* name;
    int age;
    int seniority;
}Student;

void increaseSeniority(Student*);
void printInfo(Student*);

int main(){
    Student students[3]={
        {"Alexander Vindelinckx", 34, 5},
        {"John Doe", 25, 1},
        {"Jane Doe",22, 2}
    };

    printf("Here are 3 books: \n");
    for(int i=0;i<3;i++){
        printInfo(&students[i]);
    }
    printf("If all students pass this year, this will be the situation: \n");
    for(int i=0;i<3;i++){
        increaseSeniority(&students[i]);
        printInfo(&students[i]);
    }
    return EXIT_SUCCESS;
}

void increaseSeniority(Student*student){
    (*student).seniority++;
    return;
}
void printInfo(Student* student){
    printf("%s, Age: %d, Seniority: %d years\n", student->name, student->age, (*student).seniority);
    return;
}