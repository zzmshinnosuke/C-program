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

typedef int (*fun_t)(int, int); 

struct Source
{
    int a;        // 数据a
    int b;        // 数据b
    fun_t operation;  // 算法operation
};

int main(){
    struct Source data;
    int result;
    data.a = 100;
    data.b = 200;
    data.operation = add;
    result = data.operation(data.a,data.b);
    printf("add: %d+%d = %d\n",data.a, data.b, result);
}