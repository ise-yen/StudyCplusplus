#include <string>
#include <vector>

using namespace std;

// 피자 나눠 먹기(1)
int solution0401(int n)
{
    int answer = 0;
    answer = n % 7 ? n / 7 + 1 : n / 7;
    return answer;
}

// 피자 나눠 먹기(2)
int solution0402(int n)
{
    int answer = 0;
    if (n % 6 == 0)
        answer = n / 6;
    else
    {
        int tmp = n;
        int k = 0;
        while (tmp % 6 != 0)
        {
            k++;
            tmp = n * k;
        }
        answer = tmp / 6;
    }
    return answer;
}

// 피자 나눠 먹기(3)
int solution0403(int slice, int n)
{
    int answer = 0;
    if (slice >= n)
        answer = 1;
    else
        n % slice == 0 ? answer = n / slice : answer = n / slice + 1;
    return answer;
}

// 배열의 평균값
double solution0404(vector<int> numbers)
{
    double answer = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        answer += numbers[i];
    }

    answer /= numbers.size();
    return answer;
}