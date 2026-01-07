#include <iostream>
using namespace std;
class Student {
private:
	int number;
	float score;
public:
	void setData(int n, float s) {
		number = n;
		score = s;
	}
	float getScore() {
		return score;
	}
	int getNumber() {
		return number;
	}
};
void max(Student* students, int size) {
	float maxScore = students[0].getScore();
	int maxIndex = 0;
	for (int i = 1; i < size;i++) {
		if (students[i].getScore() > maxScore)
		{
			maxScore = students[i].getScore();
			maxIndex = i;
		}
	}
	cout << "最高成绩是" << students[maxIndex].getScore() << endl;
	cout << "其学号是" << students[maxIndex].getNumber() << endl;
}
int main() {
	Student  students[5];
	students[0].setData(1, 85.5);
	students[1].setData(2, 100.0);
	students[2].setData(3, 78.5);
	students[3].setData(4, 95.5);
	students[4].setData(5, 88.0);

	max(students, 5);

	return 0;
}