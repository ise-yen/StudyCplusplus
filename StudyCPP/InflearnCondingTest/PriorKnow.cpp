#include<iostream>
using namespace std;


// STL string
#include<string>
int main() {
	string a = "Time Is 2022";

	// 문자열 길이, 크기 
	cout << "크기 : " << a.size() << ", 길이 : " << a.length() << endl;
	
	// 대문자 판별 : isupper
	cout << "\n대문자 : ";
	for (int i = 0; i < a.size(); i++) {
		if (isupper(a[i])) {
			cout << a[i] << " ";
		}
	}

	// 소문자 판별 : islower
	cout << "\n소문자 : ";
	for (int i = 0; i < a.size(); i++) {
		if (islower (a[i])) {
			cout << a[i] << " ";
		}
	}

	// 숫자 판별 : isdigit
	cout << "\n숫자 : ";
	for (int i = 0; i < a.size(); i++) {
		if (isdigit(a[i])) {
			cout << a[i] << " ";
		}
	}

	// 문자열 맨 뒤에 글자 추가
	cout << "\n뒤에 글자 추가 : ";
	a.push_back('e');
	a = a + 's'; // push_back과 같은 기능
	cout << a << endl; // Time Is 2022es
	cout << "크기 : " << a.size() << ", 길이 : " << a.length() << endl;

	// 특정 char의 위치 찾기
	cout << "\nT의 위치 : ";
	cout << a.find('e') << endl; // e처럼 같은 글자는 먼저인 글자의 위치

	// 문자열 맨 뒤에 글자 빼기
	cout << "\n뒤에 글자 제거 : \n";
	a.pop_back();
	cout << a << endl; // Time Is 2022e
	cout << "크기 : " << a.size() << ", 길이 : " << a.length() << endl;

	// 문자열 맨 뒤에 문자열 추가
	cout << "\n뒤에 문자열 추가 : \n";
	a.append("add string");
	a += " adding string2";
	cout << a << endl; // Time Is 2022eadd string adding string2
	
	// 특정 부분의 문자열을 뽑아내기
	cout << "\n특정 부분만 출력 : \n";
	cout << a.substr(8) << endl; // 2022eadd string adding string2
	cout << a.substr(0, 6) << endl; // Time I (0번 위치부터 6글자))
	cout << a.substr(8, 6) << endl; // 2022ea (8번 위치부터 6글자))

	// 문자열 비우기
	cout << "\n지우기 : ";
	a.clear();
	cout << a << endl;
}