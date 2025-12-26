#include <iostream>
using namespace std;
void calculation(int m, int n,int &gcd,int &lcm){
	int a = m, b = n;
	while(b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	gcd = a;
	lcm = (m * n) / gcd;
}
int main() {
	int m, n;
	cout << "请输入两个正整数：";
	cin >> m >> n;
	int gcd, lcm;
	calculation(m, n, gcd, lcm);
	cout << "最大公约数是"<<gcd << endl <<"最小公倍数是" <<lcm << endl;
	return 0;
}