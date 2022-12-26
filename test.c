#include<stdio.h>

int main() {
    int a=5;
    int *p =&a;    
    int **q=&p;
    int** m=&a;
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%p,%p,%p,%p,%p\n",&a,p,&p,*q,q);
    //printf("%d\n",*q);
    //printf("%p\n",p)
    return 0;
}

