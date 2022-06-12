#include<iostream>
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
	string securityNum;
	int year;

	cin >> securityNum;
	year = (securityNum[0] - '0') * 10 + securityNum[1] - '0';

	int age{};
	char gender{};
	switch (securityNum[7])
	{
		case '1':
			gender = 'M';
			age = 2019 - (1900 + year) + 1;
			break;
		case '2':
			gender = 'W';
			age = 2019 - (1900 + year) + 1;
			break;
		case '3':
			gender = 'M';
			age = 2019 - (2000 + year) + 1;
			break;
		case '4':
			gender = 'W';
			age = 2019 - (2000 + year) + 1;
			break;
		default:
			break;
	}
	cout << age << " " << gender;
}

int main() {
	five_CalAge();
}