#include<iostream>
#include<stdio.h>
#include<string> //getline
#include<vector>
using namespace std;

void No1974_Sudoku() {
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int res = 1;
		int sudoku[9][9];

		// 스도쿠 입력
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				int tmp;
				cin >> tmp;
				sudoku[i][j] = tmp;
			}
		}

		// 가로
		for (int i = 0; i < 9; i++) {
			int checkNum[10] = { 0 };
			for (int j = 0; j < 9; j++) {
				checkNum[sudoku[i][j]]++;
			}
			for (int i = 1; i < 10; i++) {
				if (checkNum[i] != 1) {
					res = 0;
					break;
				}
			}
		}
		// 세로
		for (int i = 0; i < 9; i++) {
			int checkNum[10] = { 0 };
			for (int j = 0; j < 9; j++) {
				checkNum[sudoku[i][j]]++;
			}
			for (int i = 1; i < 10; i++) {
				if (checkNum[i] != 1) {
					res = 0;
					cout << "8" << "\n";
					break;
				}
			}
		}
		// 네모
		for (int l = 0; l <= 6; l += 3) {
			for (int k = 0; k <= 6; k += 3) {
				int checkNum[10] = { 0 };
				int row = l + 3;
				int col = k + 3;

				for (int i = k; i < row; i++) {
					for (int j = l; j < col; j++) {
						checkNum[sudoku[i][j]]++;
					}
				}
				for (int w = 1; w < 10; w++) {
					if (checkNum[w] != 1) {
						res = 0;
						cout << w << ": " << checkNum[w] << "\n";
						break;
					}
				}
			}
		}

		cout << "#" << test_case << " " << res << "\n";
	}

}

