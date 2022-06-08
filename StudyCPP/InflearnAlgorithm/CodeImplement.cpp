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

void answer() {

}
int main() {
	answer();
}