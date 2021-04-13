// È­¾¾¿Âµµ¸¦ ¼·¾¾¿Âµµ·Î ¹Ù²Ù±â

// È­¾¾ ¿Âµµ¸¦ ¼·¾¾ ¿Âµµ·Î ¹Ù²Ù´Â º¯È¯½Ä 
// c_temp = (5.0 / 9.0) * (f_temp - 32)

#include <iostream>

using namespace std;

int main() {
	double f_temp = 60;
	double c_temp;

	c_temp = (5.0 / 9.0) * (f_temp - 32);

	cout << "È­¾¾¿Âµµ " << f_temp << "µµ´Â ¼·¾¾¿Âµµ" << c_temp << "µµÀÔ´Ï´Ù." << endl;

	return 0;
}