#include<iostream>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}
int main() {
	int count = 0;
	int num = 2;
	cout << "前200个素数为：" << endl;
	while (count < 200) {
		if (isPrime(num)) {
			cout << num << " ";
			count++;
			if (count % 10 == 0) cout << endl; // 每行输出10个素数
		}
		num++;
	}
}
	