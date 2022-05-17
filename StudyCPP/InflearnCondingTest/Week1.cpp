#include <iostream>
#include <string>
#include <vector>
using namespace std;

void SameChar(){
	int N;
	string word; //  N개의 단어들
	vector<string> words;
	string answer; // 정답단어

	// N개의 단어들 입력받기
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> word;
		words.push_back(word);
	}

	// 제일 짧은 길이의 단어 찾기
	string shortWord = words[0];

	for (int i = 0; i < N; i++) {
		if (shortWord.length() > words[i].length()) {
			shortWord = words[i];
		}
	}

	// 글자가 같은 단어 판별
	int cnt = 1;
	for (int charI = 0; charI < shortWord.length(); charI++) {
		for (int j = 0; j < N-1; j++) {
			if (words[j][charI] == words[j + 1][charI]) {
				cnt++;
			}
		}

		if (cnt == N) {
			answer.push_back(words[0][charI]);
			cnt = 1;
		}
		else break;
	}

	cout << answer;
}