#include <stdio.h>

int main(void) {
    char x[7] = "apple";
    //x라는 변수(메모리 공간)에 "apple"을 저장
    //[7]은 배열의 크기를 의미
    //apple은 문자열을 의미
    //2바이트 이상의 문자열을 저장하기 위해서는 배열의 크기를 지정해야 함
    printf("내가 지금 먹는건 %s입니다.\n", x);
    return 0;
}
