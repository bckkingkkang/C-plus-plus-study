// 1�� �������� 1

#include <string.h>
#include <iostream>

using namespace std;

int main() {
	string subject; // �־�
	string verb; // ����
	string object; // ������

	cout << "�־� : ";
	cin >> subject;

	cout << "���� : ";
	cin >> verb;

	cout << "������ : ";
	cin >> object;

	cout << endl << subject << " " << verb << " " << object << endl;

	return 0;
}