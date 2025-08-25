#include<stdio.h>

typedef struct{
    int usn;
    char name[30];
    float marks;
} student;

int main(){
    student students[3] = {
        {1, "Arvind reddy", 90.4},
        {2, "Arvind", 44},
        {3, "reddy", 56.4}
    };
    int n=sizeof(students)/sizeof(students[0]);
    for(int i=0;i<n;i++){
        printf("%d %s %.2f\n",students[i].usn, students[i].name, students[i].marks);
    }


    printf("Size: %zu\n", sizeof(student));

    
}