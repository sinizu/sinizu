#include<stdio.h>

void MyPrint(){
    // 打印函数
    printf("Hello!World!\n");
    return;
}

void test_tabnine(void) {
    // print from 1 to 100
    for (int i = 1; i <= 100; i++) {
        MyPrint();
    }
}

int main(){
    printf("aaa\n");
    return 0;
}