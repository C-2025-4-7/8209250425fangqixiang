#include <iostream>
using namespace std;
int main()

{
	const float p = 3.14;
	int r;
	int h;
	cout << "ÇëÊäÈë°ë¾¶£º" << endl;
	cin >> r;
	cout << "ÇëÊäÈë¸ß:" << endl;
	cin >> h;
	float V = r * r * h * p / 3;
	cout << V << endl;
	return 0;
}