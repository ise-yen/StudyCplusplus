
#include <string>
#include <vector>

using namespace std;

// 개미 군단 - 내꺼
int solution0901(int hp)
{
    int answer = 0;
    answer += hp / 5;
    hp %= 5;
    answer += hp / 3;
    hp %= 3;
    answer += hp;
    return answer;
}
// 개미 군단 - best
int solution0901_best(int hp)
{
    int answer = 0;
    for (int i = 5; i > 0; i -= 2)
    {
        answer += hp / i;
        hp = hp % i;
    }
    return answer;
}

// 모스부호(1)
char morse(string str)
{
    if (str == ".-")
        return 'a';
    else if (str == "-...")
        return 'b';
    else if (str == "-.-.")
        return 'c';
    else if (str == "-..")
        return 'd';
    else if (str == ".")
        return 'e';
    else if (str == "..-.")
        return 'f';
    else if (str == "--.")
        return 'g';
    else if (str == "....")
        return 'h';
    else if (str == "..")
        return 'i';
    else if (str == ".---")
        return 'j';
    else if (str == "-.-")
        return 'k';
    else if (str == ".-..")
        return 'l';
    else if (str == "--")
        return 'm';
    else if (str == "-.")
        return 'n';
    else if (str == "---")
        return 'o';
    else if (str == ".--.")
        return 'p';
    else if (str == "--.-")
        return 'q';
    else if (str == ".-.")
        return 'r';
    else if (str == "...")
        return 's';
    else if (str == "-")
        return 't';
    else if (str == "..-")
        return 'u';
    else if (str == "...-")
        return 'v';
    else if (str == ".--")
        return 'w';
    else if (str == "-..-")
        return 'x';
    else if (str == "-.--")
        return 'y';
    else if (str == "--..")
        return 'z';
    else
        return ' ';
}

string solution0902(string letter)
{
    string answer = "";
    vector<string> ls;
    string tmp;
    for (int i = 0; i < letter.length(); i++)
    {
        if (letter[i] == ' ')
        {
            ls.push_back(tmp);
            tmp = "";
        }
        else
            tmp += letter[i];
    }
    ls.push_back(tmp);

    for (int i = 0; i < ls.size(); i++)
    {
        answer += morse(ls[i]);
    }
    return answer;
}

// 가위 바위 보
string solution0903(string rsp)
{
    string answer = "";
    for (char s : rsp)
    {
        switch (s)
        {
        case '2':
            answer += '0';
            break;
        case '0':
            answer += '5';
            break;
        case '5':
            answer += '2';
            break;
        }
    }
    return answer;
}

// 구슬을 나누는 경우의 수