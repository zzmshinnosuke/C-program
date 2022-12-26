// 函数指针有两种常用的用法，一种是作为结构体成员, 另一种是函数指针作为函数的参数
// 回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。
// https://blog.csdn.net/zhengnianli/article/details/98477427

#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a / b;
}

int calculate(int a, int b, int (*opt)(int, int)){
    int result;
    result = opt(a, b);
    return result;
}

int main(){
    int result;
    int a = 192, b =48;
    
    result = calculate(a, b, add);
    printf("add: %d+%d = %d\n", a, b, result);
    
    result = calculate(a, b, sub);
    printf("sub: %d-%d = %d\n", a, b, result);
    
    result = calculate(a, b, mul);
    printf("mul: %d*%d = %d\n", a, b, result);
    
    result = calculate(a, b, div);
    printf("div: %d/%d = %d\n", a, b, result);  
}
