#include <string>
#include <vector>

using namespace std;

// 옷가게 할인 받기
int solution0501(int price)
{
    int answer = 0;
    if (price / 10000 >= 50)
        answer = price * 0.8;
    else if (price / 10000 >= 30)
        answer = price * 0.9;
    else if (price / 10000 >= 10)
        answer = price * 0.95;
    else
        answer = price;
    return answer;
}

// 나이 출력
int solution0502(int age)
{
    int answer = 0;
    answer = 2022 - age + 1;
    return answer;
}

// 아이스 아메리카노 - 내꺼
vector<int> solution0503(int money)
{
    vector<int> answer;
    int iceAme = 5500;
    answer.push_back(money / iceAme);
    answer.push_back(money % iceAme);
    return answer;
}

// 아이스 아메리카노 - best
vector<int> solution_best(int money)
{
    return {money / 5500, money % 5500};
}

// 배열 뒤집기
vector<int> solution0504(vector<int> num_list)
{
    vector<int> answer;
    for (int i = num_list.size() - 1; i >= 0; i--)
    {
        answer.push_back(num_list[i]);
    }
    return answer;
}