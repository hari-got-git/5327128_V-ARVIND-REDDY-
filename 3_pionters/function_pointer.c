#include<stdio.h>

void fun(int* c, int *d){
    printf("%p\n",*c);
    printf("%p\n",*d);
    printf("%d\n",*c+*d);
}

int main(){
    int a=10;
    int b=20;
    fun(&a, &b);
}