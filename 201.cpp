#include <iostream>
using namespace std;
int main()

{
	char cha;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> cha;
	if (cha >= 'a' && cha <= 'z')
	{
		char Cha = cha - 32;
		cout << Cha << endl;
	}
	else {
		int A = static_cast<int>(cha) + 1;
		cout << A << endl;
	}
	return 0;
}