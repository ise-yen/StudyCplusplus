//��Ʃ�� : �ڵ���� ���α׷���

/*
std::vector��
-dynamic size arrays
-sequence container
*/

//��
void DynamicArr() {
	int* numsPtr = new int[5];

	for (int i = 0; i < 5; i++) {
		numsPtr[i] = i;
	}

	delete[] numsPtr;

	/*
	�޸� ����
	//stack : *numsPtr


	//heap : 0, 1, 2, 3, 4
	*/

}

