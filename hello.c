#include<stdio.h>

void MyPrint(){
    // 打印函数
    printf("Hello!World!\n");
    return;
}

void MyScanf(){
    // 接受数据并打印
    int a;
    scanf("%d", a);
    printf("输入的数据是：%d", a);
    return;
}

int main(){
    MyScanf();
    printf("aaa\n");
    return 0;
}