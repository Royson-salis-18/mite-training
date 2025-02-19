#include<stdio.h>
struct Student{
    char name[255];
    int marks;
};
typedef struct Student Student_t;
void readStudents(Student_t* students, int length){
    for(int i=0;i<length;i++){
        printf("student %d name:",i+1);
        scanf("%s",students[i].name);
        printf("student marks:");
        scanf("%d",&students[i].marks);
    }
}
void printStudents(Student_t* students, int length){
    printf("Studnet Records:\n");
    for(int i=0;i<length;i++){
        printf("%s - %d\n",students[i].name,students[i].marks);
    }
}
int main(){
    Student_t students[1000];
    int studentsCount;
    printf("enter number of students:");
    scanf("%d",&studentsCount);
    readStudents(students,studentsCount);
    printStudents(students, studentsCount);
    return 0;
}
