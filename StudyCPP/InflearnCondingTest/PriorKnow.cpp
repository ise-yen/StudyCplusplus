#include<iostream>
using namespace std;


// STL string
#include<string>
int main() {
	string a = "Time Is 2022";

	// ���ڿ� ����, ũ�� 
	cout << "ũ�� : " << a.size() << ", ���� : " << a.length() << endl;
	
	// �빮�� �Ǻ� : isupper
	cout << "\n�빮�� : ";
	for (int i = 0; i < a.size(); i++) {
		if (isupper(a[i])) {
			cout << a[i] << " ";
		}
	}

	// �ҹ��� �Ǻ� : islower
	cout << "\n�ҹ��� : ";
	for (int i = 0; i < a.size(); i++) {
		if (islower (a[i])) {
			cout << a[i] << " ";
		}
	}

	// ���� �Ǻ� : isdigit
	cout << "\n���� : ";
	for (int i = 0; i < a.size(); i++) {
		if (isdigit(a[i])) {
			cout << a[i] << " ";
		}
	}

	// ���ڿ� �� �ڿ� ���� �߰�
	cout << "\n�ڿ� ���� �߰� : ";
	a.push_back('e');
	a = a + 's'; // push_back�� ���� ���
	cout << a << endl; // Time Is 2022es
	cout << "ũ�� : " << a.size() << ", ���� : " << a.length() << endl;

	// Ư�� char�� ��ġ ã��
	cout << "\nT�� ��ġ : ";
	cout << a.find('e') << endl; // eó�� ���� ���ڴ� ������ ������ ��ġ

	// ���ڿ� �� �ڿ� ���� ����
	cout << "\n�ڿ� ���� ���� : \n";
	a.pop_back();
	cout << a << endl; // Time Is 2022e
	cout << "ũ�� : " << a.size() << ", ���� : " << a.length() << endl;

	// ���ڿ� �� �ڿ� ���ڿ� �߰�
	cout << "\n�ڿ� ���ڿ� �߰� : \n";
	a.append("add string");
	a += " adding string2";
	cout << a << endl; // Time Is 2022eadd string adding string2
	
	// Ư�� �κ��� ���ڿ��� �̾Ƴ���
	cout << "\nƯ�� �κи� ��� : \n";
	cout << a.substr(8) << endl; // 2022eadd string adding string2
	cout << a.substr(0, 6) << endl; // Time I (0�� ��ġ���� 6����))
	cout << a.substr(8, 6) << endl; // 2022ea (8�� ��ġ���� 6����))

	// ���ڿ� ����
	cout << "\n����� : ";
	a.clear();
	cout << a << endl;
}