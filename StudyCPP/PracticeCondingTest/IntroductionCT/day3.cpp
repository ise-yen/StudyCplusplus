#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 나머지 구하기
int solution0301(int num1, int num2)
{
    int answer = -1;
    answer = num1 % num2;
    return answer;
}

// 중앙값 구하기
int solution0302(vector<int> array)
{
    int answer = 0;
    sort(array.begin(), array.end());
    int len = array.size();
    answer = array[len / 2];
    return answer;
}

// 최빈값 구하기
int solution0303(vector<int> array)
{
    int answer = 0;
    int tmp[1000] = {
        0,
    };
    for (int a : array)
    {
        tmp[a]++;
    }
    int max = 0, smax = 0;
    int sans = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (max < tmp[i])
        {
            answer = i;
            max = tmp[i];
        }
        else if (max == tmp[i])
        {
            max = smax = tmp[i];
        }
    }
    if (max == smax)
        return -1;
    else
        return answer;
}

// 짝수는 싫어요
vector<int> solution0304(int n)
{
    vector<int> answer;
    for (int i = 1; i <= n; i += 2)
    {
        answer.push_back(i);
    }
    return answer;
}