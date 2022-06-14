#include<iostream>
#include<stdio.h>
using namespace std;

void one_multiplier() {
	int N{}, M{}, sum{};
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		if (i % M == 0) sum += i;
	}
	cout << sum;
}

void two_SumNumber() {
	int a, b, sum{};
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		cout << i;
		if (i != b) cout << " + ";
		sum += i;
	}
	cout << " = " << sum;
}

void three_SumDivisor() {
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

void four_DisAge() {
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

void five_CalAge() {
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

void six_ExtractNum() {
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

void answer_six_ExtractNum() {
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

int main() {
	six_ExtractNum();
}