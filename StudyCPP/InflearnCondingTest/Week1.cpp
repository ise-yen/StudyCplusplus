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

void OrangeTree() {
	int W, H, T, S; // 땅 크기 가로, 세로, 오렌지 개수, 현수의 영지 크기(정사각형)
	// 3 <= w, h <= 100,000
	// 1 <= t <= 100
	// 1 <= s <= w, h
	vector<vector<int>> trees;

	cin >> W >> H >> T >> S;

	for (int i = 0; i < T; i++) {
		vector<int> treePos;
		int x, y;
		cin >> x >> y;
		treePos.push_back(x);
		treePos.push_back(y);
		trees.push_back(treePos);
	}
}

// 시간초과
void Timeout_WatchMovie() {
	int N;
	vector<int> heights;
	heights.push_back(0); // 0번 자리는 패스
	cin >> N;
	
	// 1번부터 N번까지의 학생들
	for (int i = 1; i <= N; i++) {
		int h;
		cin >> h;
		heights.push_back(h);
	}

	vector<int> res; // 출력할 값
	for (auto& i : heights) res.push_back(0); // heights의 크기만큼(==학생수) 0으로 초기화

	// 앞 자리 중 키가 더 큰 학생의 위치 찾기
	for (int i = N; i > 0; i--) {
		for (int pos = i-1; pos > 0; pos--) {
			if (heights[i] < heights[pos]) {
				res[i] = pos;
				break;
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << res[i] << " ";
	}
}
