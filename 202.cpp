#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - 2 * x;
	}
	else if (x >= 1 && x < 5) {
		y = 2.0 / (4 * x) + 1;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
	}
	else {
		cout << "x=" << x << "x不在定义域内" << endl;
	}
	cout << "y=" << y << endl;
	return 0;

}