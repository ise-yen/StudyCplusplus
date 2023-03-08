#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 두 수의 합
int solution0101(int num1, int num2) {
    int answer = -1;
    answer = num1 + num2;
    return answer;
}

// 두 수의 차
int solution0102(int num1, int num2) {
    int answer = num1 - num2;
    return answer;
}

// 두 수의 곱
int solution0103(int num1, int num2) {
    int answer = num1 * num2;
    return answer;
}

// 몫 구하기
int solution0104(int num1, int num2) {
    int answer = num1 / num2;
    return answer;
}