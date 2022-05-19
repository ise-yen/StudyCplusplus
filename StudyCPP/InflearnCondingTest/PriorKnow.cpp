#include<iostream>
#include<vector>
using namespace std;
//#include<bits/stdc++.h> // 모든 STL 라이브러리 import

// STL string
#include<string>
void STLStringExample() {
	// 띄어쓰기로 단어를 구분했을 때 제일 긴 길이를 가진 단어 찾기
	string a = "it is time to study", res;
	int pos, max = INT_MIN; // 최저값
	while ((pos = a.find(' ')) != string::npos) { // 첫번째 띄어쓰기 인덱스 위치
		//string::npos 의미 : 찾는 글자가 없을 때 반환하는 값(-1)
		string tmp = a.substr(0, pos); // 0번 인덱스부터 pos개까지의 문자열. pos==2이므로 0번부터 2개의 글자(i, t)까지
		cout << tmp << endl; // it is time to까지 출력됨
		a = a.substr(pos + 1); // (띄어쓰기 위치 + 1)부터의 문자열
		// study가 출력 안되는 이유 : 그 뒤에 ' '(띄어쓰기)가 없어서 while 조건에서 out 됨
	}
	cout << a << endl; // study 출력
}

void STLStringExample2() {
	// 띄어쓰기로 단어를 구분했을 때 제일 긴 길이를 가진 단어 찾기
	string a = "it is time to study", res;
	int pos, max = INT_MIN; // 최저값
	while ((pos = a.find(' ')) != string::npos) { // 첫번째 띄어쓰기 인덱스 위치
		string tmp = a.substr(0, pos);
		int len = tmp.size();
		if (len > max) {
			max = len;
			res = tmp;
		}
		a = a.substr(pos + 1);
	}
	cout << res << endl; // time 출력. study까지 못 가기 때문

	if (a.size() > max) res = a;
	cout << res << endl; // study 출력

}

void STLStringBasic() {
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

// STL set
#include<set>
void STLSet() {
	vector<int> v = { 1, 3, 2, 3, 2, 3, 2, 3, 1, 2 };
	set<int> s; // 균형잡힌 이진트리
	for (int i = 0; i < v.size(); i++) {
		s.insert(v[i]); // 자동 정렬이 되면서 중복된 값은 제거됨 : ex) 원소는 1, 2, 3만 있음
	}
	cout << "set s의 크기 : " << s.size() << endl;

	cout << "원소 : ";
	//for (auto it = s.begin(); it != s.end(); it++) {
	//	//s.end() // end()는 마지막 원소의 다음 위치
	//	cout << *it << " ";
	//}
	for (auto x : s) cout << x << " "; // 위의 반복문과 같은 의미

	// s.find(원소값) : 원소값의 위치 반환. 원소값이 없으면 s.end()의 위치(==마지막 원소의 다음 위치)
	if (s.find(3) == s.end()) {
		cout << "\n3은 set에 없습니다." << endl;
	}
	else {
		cout << "3은 set에 있습니다." << endl;
	}
}
