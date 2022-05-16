//유튜버 : 코드없는 프로그래밍

/*
std::vector란
-dynamic size arrays
-sequence container
*/

//비교
void DynamicArr() {
	int* numsPtr = new int[5];

	for (int i = 0; i < 5; i++) {
		numsPtr[i] = i;
	}

	delete[] numsPtr;

	/*
	메모리 구조
	//stack : *numsPtr


	//heap : 0, 1, 2, 3, 4
	*/

}

