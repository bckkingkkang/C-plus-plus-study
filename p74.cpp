// �� ���� ���� �߿��� ū �� ã��
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int largest;

	cout << "�� ���� ������ �Է��ϼ��� : ";
	cin >> a >> b >> c;

	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else
		largest = c;

	cout << "���� ū ������ " << largest << "�Դϴ�." << endl;

	return 0;
}