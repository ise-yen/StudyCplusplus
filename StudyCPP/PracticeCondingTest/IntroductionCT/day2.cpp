#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

// 두 수의 나눗셈
int solution0201(int num1, int num2)
{
    int answer = 0;
    answer = num1 * 1000 / num2;
    return answer;
}

// 숫자 비교하기
int solution0202(int num1, int num2)
{
    int answer = 0;
    return num1 == num2 ? 1 : -1;
}

// 분수의 덧셈
vector<int> solution0203(int numer1, int denom1, int numer2, int denom2)
{
    vector<int> answer;
    int numer, denom; // 더한 뒤의 분자, 분모

    // 분수 더하기
    if (denom1 == denom2)
    {
        numer = numer1 + numer2;
        denom = denom1;
    }
    else
    {
        numer = numer1 * denom2 + numer2 * denom1;
        denom = denom1 * denom2;
    }

    // 기약분사 만들기(약분)
    // - 분모 기준으로
    for (int i = 2; i <= denom; i++)
    {
        // - 분자 분모 모두 약분되는 거라면
        if (denom % i == 0 && numer % i == 0)
        {
            numer /= i;
            denom /= i;
            i = 1;
        }
    }

    // 정답 넣기
    answer.push_back(numer); // 분자 넣고
    answer.push_back(denom); // 분모 넣고
    return answer;
}

// 배열 두 배 만들기
vector<int> solution0204(vector<int> numbers)
{
    vector<int> answer;
    for (int i = 0; i < numbers.size(); i++)
    {
        answer.push_back(numbers[i] * 2);
    }
    return answer;
}