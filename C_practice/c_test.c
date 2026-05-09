#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    printf("Hello  \"My first C program\" times.\n");

    int a = 10;
    //a라는 변수(메모리 공간)에 10을 저장
    int b = 20;
    //b라는 변수(메모리 공간)에 20을 저장

    printf("a+b=%d\n", a+b);
    //a+b=%d 는 변수 a와 b를 더한 값을 출력하라는 의미
    //%d는 정수(int)를 출력하라는 의미
    //\n은 줄바꿈을 의미

    return 0;
}

