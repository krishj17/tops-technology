#include<stdio.h>

struct student{
    char name[10];
    int rollno;
    int marks;
};

int main(){
    struct student str[3];
    for(int i=0; i<3; i++){
        printf("\nEnter the details of student %d: name, rollno, marks: ", i+1);
        scanf("%s %d %d", &str[i].name, &str[i].rollno, &str[i].marks);
    }
    for(int i=0; i<3; i++){
        printf("\nDetails of student 1\n Name:%s RollNo:%d Marks:%d",str[i].name, str[i].rollno, str[i].marks);
    }
    return 0;
}
