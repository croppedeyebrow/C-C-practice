#include <stdio.h>

int main(void) {
    //int main(void)는 리턴타입이 int인 함수를 선언
    //void는 인자(매개변수)가 없다는 의미

    int p = 10;
    char x = 'a';
    //p라는 변수(메모리 공간)에 10을 저장
    //x라는 변수(메모리 공간)에 'a'를 저장
    printf("p의 값은 %d입니다.", p);
    //p의 값은 %d입니다.는 p의 값을 정수(int)로 출력하라는 의미
    //%d는 정수(int)를 출력하라는 의미
    printf("x의 값은 %c입니다.", x);
    //x의 값은 %c입니다.는 x의 값을 문자(char)로 출력하라는 의미
    //%c는 문자(char)를 출력하라는 의미

    return 0;
    //return 0은 함수를 종료하고 0을 반환하라는 의미

}