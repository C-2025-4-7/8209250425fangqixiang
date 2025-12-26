#include <iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
	for (int i = 0;s2[i];i++) {
		int j = 0;
		while (s1[j] && s1[j] == s2[i + j])j++;
		if (!s1[j])return i;
	}
	return -1;
}
 
int main() {
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin >> s1;
	cout << "Enter the second string:";
	cin.ignore();
	cin.getline(s2, 100);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;
	return 0;
}