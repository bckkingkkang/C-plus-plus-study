#include <iostream>
using namespace std;

int main() {
	double c_temp = 0;
	double f_temp;

	cout << "��ȯ�� ���� �µ��� �Է��ϼ���: ";
	cin >> c_temp;

	f_temp = (9.0 / 5.0 * c_temp) + 32;
	cout << "�����µ� " << c_temp << "���� ȭ���µ� " << f_temp << "���Դϴ�." << endl;

	return 0;
}