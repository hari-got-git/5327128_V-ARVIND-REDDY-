#include<stdio.h>

struct student{
    int usn;
    char name[30];
    float marks;
};

typedef struct {
    char brand[20];
    float price;
} Car;

int main(){
    // normal struct
    struct student s1 = {1, "Arvind reddy", 90.4};
    // typedef struct
    Car c1 = {"Tesla", 60000.5};   // no need to write "struct"


    // printing struct data using . operator
    printf("%d %s %f\n",s1.usn ,s1.name, s1.marks);
    // printing struct data using pointer
    struct student* ptr = &s1;
    printf("%d %s %f",ptr->usn ,ptr->name, ptr->marks);
}