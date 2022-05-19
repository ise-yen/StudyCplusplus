#include <iostream>
#include <vector>
using namespace std;

/// < STL string::count() > ///
// 0. 자연수 N과 N개의 문자열 입력받기
// 1. 제일 길이가 짧은 단어를 찾고 그 길이를 변수에 넣기(len)
// 2. 입력받은 문자열들의 0~len까지의 글자들을 각각 비교하기
// 2-1. 임시 문자열 tmp에 0번 위치의 글자들 넣기
// 2-2. string.count()로 tmp[0]의 개수가 N과 같은지 비교
// 2-3. 정답 문자열 res에 넣기
// 3. N과 다르면 그 전까지 넣어뒀던 res 출력
#include <string>
void SameCharAnswer1() {
	int N, len = INT_MAX;
	string str;
	cin >> N;
	vector<string> words;
	for (int i = 0; i < N; i++) {
		cin >> str;
		words.push_back(str);
		len = min(len, int(str.size()));
	}

	string res = "";
	for (int i = 0; i < len; i++) {
		string tmp = "";
		for (auto &s : words) tmp += s[i]; //주소(&)로 받는 이유 : 속도가 더 빠름
		int m = count(tmp.begin(), tmp.end(), tmp[0]);
		if (m != N) break;
		else res += tmp[0];
	}
	cout << res << endl;
}
/// < REVIEW > ///
// 1. 구현 로직은 같았지만 string::count()과 std::min()의 활용도를 배움
// 2. for(auto)의 활용. 개념은 알지만 실제로 써본적이 별로 없었는데 이번에 감을 익힐 수 있었다.


/// < STL set > ///
// 2. set<char> s;
// 2-1. s.insert()으로 0번 위치의 글자들을 넣기.
// 2-2. 중복으르 허용하지 않으므로 같은 위치에 다른 글자가 입력되면 size()가 달라짐. 그때 break
#include <set>
void SameCharAnswer2() {
	int N, len = INT_MAX;
	string str;
	cin >> N;
	vector<string> words;
	for (int i = 0; i < N; i++) {
		cin >> str;
		words.push_back(str);
		len = min(len, int(str.size()));
	}

	string res = "";
	for (int i = 0; i < len; i++) {
		set<char> tmp;
		for (auto& s : words) tmp.insert(s[i]);
		if (tmp.size() != 1) break;
		else res += words[0][i];
	}
	cout << res << endl;
}


/// < STL  string::substr() > ///
// 기준이 되는 문자열 자체가 다른 문자열에 있는지 판별
// 없으면 기준 문자열의 끝자리를 지우고 다시 찾기
// 있으면 다음 문자열과 비교
// 없으면 또 기준 문자열의 끝자리를 지우고 다시 찾기
void SameCharAnswer3() {
	int N, len = INT_MAX;
	string str;
	cin >> N;
	vector<string> words;
	for (int i = 0; i < N; i++) {
		cin >> str;
		words.push_back(str);
	}

	string res = words[0];
	for (int i = 1; i < words.size(); i++) {
		while (words[i].find(res) != 0) {
			res = res.substr(0, res.size() - 1);
		}

	}
	cout << res << endl;
}