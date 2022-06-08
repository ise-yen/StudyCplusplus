#include<iostream>
using namespace std;
void one_multiplier() {
	int N{}, M{}, sum{};
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		if (i % M == 0) sum += i;
	}
	cout << sum;
}

int main() {
	one_multiplier();
}