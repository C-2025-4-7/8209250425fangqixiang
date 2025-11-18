#include <iostream>
using namespace std;
int main()

{
	int a, b;
	cout << "请输入两个正整数:" << endl;
	cin >> a >> b;
	int c = a;
	int d = b;
	int e = min(a, b);
	while (true) {
		if (c % e == 0 && d % e == 0) {
			break;
		}
		e--;
	}
	int f = max(a, b);
	while (true) {
		if (f % c == 0 &&f % d == 0) {
			break;
		}
		f++;
	}
	cout << "最大公约数是" << e << endl;
	cout << "最小公倍数是" << f << endl;
	return 0;
}

