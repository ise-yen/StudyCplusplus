#include<iostream>
#include<stdio.h>
#include<string> //getline
#include<vector>
using namespace std;

void multiplier_01() {
	int N{}, M{}, sum{};
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		if (i % M == 0) sum += i;
	}
	cout << sum;
}

void SumNumber_02() {
	int a, b, sum{};
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		cout << i;
		if (i != b) cout << " + ";
		sum += i;
	}
	cout << " = " << sum;
}

void SumDivisor_03() {
	int n, sum{};
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			if (i == 1) cout << i;
			else cout << " + " << i;
			sum += i;
		}
	}
	cout << " = " << sum;
}

void DisAge_04() {
	FILE* stream;
	freopen_s(&stream, "input.txt.", "r", stdin);
	int n;
	cin >> n;
	int max{}, min{};
	for (int i = 0; i < n; i++) {
		int tmp{};
		cin >> tmp;
		if (i == 0) {
			max = tmp;
			min = tmp;
		}
		else {
			if (tmp > max) max = tmp;
			if (tmp < min) min = tmp;
		}
	}
	cout << max - min;
}

void CalAge_05() {
	FILE* stream;
	freopen_s(&stream, "input.txt.", "r", stdin);

	char securityNum[15];
	int birthyear;
	int year = 2019;

	scanf_s("%s", &securityNum, sizeof(securityNum));
	birthyear = (securityNum[0] - '0') * 10 + securityNum[1] - '0';

	int age{};
	char gender{};
	switch (securityNum[7])
	{
		case '1':
			gender = 'M';
			age = year - (1900 + birthyear) + 1;
			break;
		case '2':
			gender = 'W';
			age = year - (1900 + birthyear) + 1;
			break;
		case '3':
			gender = 'M';
			age = year - (2000 + birthyear) + 1;
			break;
		case '4':
			gender = 'W';
			age = year - (2000 + birthyear) + 1;
			break;
		default:
			break;
	}
	printf("%d %c", age, gender);
}

void ExtractNum_06() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	string str;
	cin >> str;

	int n = 0;
	int cnt = 0;
	int unit = 1;
	for (int i = str.length()-1; i >= 0; i--) {
		if (str[i] >= '0' && str[i] <= '9') {
			if (cnt == 0) n += str[i] - '0';
			else {
				unit *= 10;
				n += (str[i] - '0') * (unit);
			}
			cnt++;
		}
	}

	int divisorCnt = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) divisorCnt++;
	}
	printf("%d\n%d", n, divisorCnt);
}

void answer_ExtractNum_06() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	char str[100];
	int res = 0, cnt = 0;
	scanf_s("%s", &str, sizeof(str));

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			res = res * 10 + (str[i] - '0');
		}
	}

	int divisorCnt = 0;
	for (int i = 1; i <= res; i++) {
		if (res % i == 0) divisorCnt++;
	}
	printf("%d\n%d", res, divisorCnt);
}

void RestoreWord_07() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	string str;
	getline(cin, str);
	string res;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != ' ') {
			if(str[i] >= 'A' && str[i] <= 'Z') res.push_back(str[i] + ('a' - 'A'));
			else res.push_back(str[i]);
		}
	}
	cout << res;
}

void answer_RestoreWord_07() {
	FILE* stream;
	freopen_s(&stream, "input.txt", "r", stdin);
	//char str[101] = { 0 }, res[101] = { 0 };
	char str[101], res[101];
	gets_s(str, sizeof(str));
	int pos = 0;
	
	for (int i = 0; i != '/0'; i++) {
		if (str[i] != ' ') {
			if (str[i] >= 'A' && str[i] <= 'Z') res[pos++] = str[i] + 32; // pos++ : res[pos]에 대입 후 pos += 1;
			else if(str[i] >= 'a' && str[i] <= 'z') res[pos++] = str[i];
			else {}
		}
	}
	res[pos] = '/0';
	printf("%s", res);
}

void CorrectParenthesis_08() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);

	string str;
	getline(cin, str);
	
	int cntParen{};
	bool isStartL = true;
	for (int i = 0; i < str.length(); i++) {
		if (cntParen == 0) {
			if (str[i] == '(') {
				isStartL = true;
				cntParen++;
			}
			else if (str[i] == ')') {
				isStartL = false;
				cntParen--;
				break;
			}
			else {}
		}
		else {
			if (str[i] == '(') cntParen++;
			else if (str[i] == ')') cntParen--;
			else {}
		}
	}

	if (isStartL) {
		if (cntParen == 0) printf("YES");
		else printf("NO");
	}
	else {
		printf("NO");
	}
}

void answerStack_CorrectParenthesis_08() {

}

// 시간 초과 발생 (: 조건 1초 이내)
void DivisorOfAll_09() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	int N = 0;
	scanf_s("%d", &N, sizeof(N));
	for (int i = 1; i <= N; i++) {
		int res = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) res++;
		}
		res++;
		printf("%d ", res);
		res = 0;
	}
}

int res[50001];
void answer_DivisorOfAll_09() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	int N = 0;
	scanf_s("%d", &N, sizeof(N));

	for (int i = 1; i <= N; i++) {
		// j의 배수로 for문
		for (int j = i; j <= N; j = j+i) {
			res[j]++;
		}
		printf("%d ", res[i]);
	}
}


int answer_digit_sum(int x) {
	int sum{}, tmp{};
	while (x > 0) {
		tmp = x % 10;
		sum += tmp;
		x = x / 10;
	}
	return sum;
}

int digit_sum(int x) {
	int sum{};
	string xToStr = to_string(x);
	for (int i = 0; i < xToStr.length(); i++) {
		sum += xToStr[i] - '0';
	}
	return sum;
}

void SumOfDigit_10() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	int N;
	scanf_s("%d", &N, sizeof(N));
	int max{};
	int res{};
	for (int i = 0; i < N; i++)
	{
		int num{}, sum{};
		scanf_s("%d", &num, sizeof(num));
		sum = digit_sum(num);

		if (max < sum) {
			max = sum;
			res = num;
		}
		else if (max == sum) {
			if (res < num) res = num;
		}
		else {}
	}

	printf("%d", res);
}

void answer_TotalNum_11() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	int N{}, res{};
	scanf_s("%d", &N, sizeof(N));
	if (N < 10) res = N;
	else {
		res += 9;
		for (int i = 10; i <= N; i++) {
			int cnt{};
			int tmp = i;
			while (tmp > 0) {
				tmp /= 10;
				cnt++;
			}
			res += cnt;
		}
	}

	printf("%d", res);
}

void TotalNum_12() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	int N{}, res{};
	scanf_s("%d", &N, sizeof(N));
	
	string n = to_string(N);
	int digit = n.length();
	int min = pow(10, digit - 1);
	if (digit == 1) res = N;
	else {
		for (int i = 1; i < digit; i++) {
			res += (pow(10, i) - pow(10, i - 1)) * i;
		}
		res += (N - min + 1) * digit;
	}
	printf("%d", res);
}

void answer_TotalNum_12() {
	int N{}, res = 0, cnt = 1, digit = 9, sum = 0;
	scanf_s("%d", &N, sizeof(N));
	while (sum + digit < N) {
		res += (cnt * digit);
		sum += digit;
		cnt++;
		digit *= 10;
	}
	res += (N - sum) * cnt;
	printf("%d", res);
}

void MostUsedDigits_13() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	int usedNum[10] = {};
	string strN{};
	cin >> strN;

	int res{}, max{};

	for (int i = 0; i < strN.length(); i++) {
		usedNum[strN[i] - '0']++;
	}

	for (int i = 0; i < 10; i++) {
		if (usedNum[i] >= max) {
			max = usedNum[i];
			res = i;
		}
	}
	printf("%d", res);
}

int reverse_simple(int x) {
	int revX{};
	string strX = to_string(x);
	std::reverse(strX.begin(), strX.end());
	revX = atoi(strX.c_str());
	return revX;
}

int reverse_hard(int x) {
	int revX{};
	string strX;
	while (x > 0) {
		strX.push_back(x%10 + '0');
		x /= 10;
	}
	int tmp = 1;
	
	for(int i = strX.length() - 1; i >= 0; i--){
		revX += (strX[i]-'0') * tmp;
		tmp *= 10;
	}
	return revX;
}

bool isPrime(int x) {
	bool res = true;
	for (int i = 2; i < x / 2 + 1; i++) {
		if (x % i == 0) res = false;
	}
	return res;
}

void InvertedPrime_14() {
	//FILE* stream;
	//freopen_s(&stream, "input.txt", "r", stdin);
	int N{};
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		int num{};
		scanf_s("%d", &num);
		int revX = reverse_hard(num);
		if (revX != 1 && isPrime(revX)) printf("%d ", revX);
	}
}


int main() {
	InvertedPrime_14();
}