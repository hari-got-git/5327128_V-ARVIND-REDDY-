#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=10;
    int* p=&a;
    printf("%d\n",a);   // a = 10
    printf("%d\n",&a);  //&a = address of a
    printf("%d\n",p);   //p = stores address of a
    printf("%d\n",&p);  //&p = address of p
    printf("%d\n",*p);  //*p = value of the pointers stored address

    int* d=&a;
    printf("%d\n",d);
    return 0;
}