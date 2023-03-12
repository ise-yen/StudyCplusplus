#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// 문자열 뒤집기
string solution0601(string my_string)
{
    string answer = "";
    reverse(my_string.begin(), my_string.end());
    return my_string;
}

// 직각삼각형 출력하기
int main0602(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 짝수 홀수 개수 - 내꺼
vector<int> solution0603(vector<int> num_list)
{
    vector<int> answer;
    int odd = 0, even = 0;
    for (int num : num_list)
        (num % 2 == 0) ? ++even : ++odd;
    answer.push_back(even);
    answer.push_back(odd);
    return answer;
}

// 짝수 홀수 개수 - best
vector<int> solution0603_best(vector<int> num_list)
{
    vector<int> answer(2, 0);
    for (int num : num_list)
        answer[num % 2]++;
    return answer;
}

// 문자 반복 출력하기
string solution0604(string my_string, int n)
{
    string answer = "";
    for (int i = 0; i < my_string.length(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            answer += my_string[i];
        }
    }
    return answer;
}