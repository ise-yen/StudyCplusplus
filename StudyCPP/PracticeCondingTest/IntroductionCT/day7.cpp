#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

// 특정 문자 제거하기 - 내꺼
string solution0701(string my_string, string letter)
{
    string answer = "";
    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] != letter[0])
            answer += my_string[i];
    }
    return answer;
}

// 특정 문자 제거하기 - best
string solution0701_best(string my_string, string letter)
{
    my_string.erase(remove(my_string.begin(), my_string.end(), letter[0]), my_string.end());
    return my_string;
}

// 각도기
int solution0702(int angle)
{
    int answer = 0;
    if (angle > 0 && angle < 90)
        answer = 1;
    else if (angle == 90)
        answer = 2;
    else if (angle > 90 && angle < 180)
        answer = 3;
    else if (angle == 180)
        answer = 4;
    return answer;
}

// 양꼬치
int solution0703(int n, int k)
{
    int answer = 0;
    int freeDrink = n / 10;
    k -= freeDrink;
    answer = n * 12000 + k * 2000;
    return answer;
}

// 짝수의 합
int solution0704(int n)
{
    int answer = 0;
    for (int i = 2; i <= n; i += 2)
    {
        answer += i;
    }
    return answer;
}