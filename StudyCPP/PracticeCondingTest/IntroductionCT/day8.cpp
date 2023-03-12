#include <string>
#include <vector>
#include <cmath>

using namespace std;

// 배열 자르기
vector<int> solution08(vector<int> numbers, int num1, int num2)
{
    vector<int> answer(numbers.begin() + num1, numbers.begin() + num2 + 1);
    return answer;
}

// 순서쌍의 개수 - 내꺼
int solution08(int n)
{
    int answer = 0;
    int flag = (int)sqrt(n);
    for (int i = 1; i <= flag; i++)
    {
        if (n % i == 0)
            answer++;
    }
    answer *= 2;
    if (flag * flag == n)
        answer--;
    return answer;
}

// 순서쌍의 개수 - 다른사름의 풀이 best
int solution08_best(int n)
{
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            answer++;
    }
    return answer;
}
