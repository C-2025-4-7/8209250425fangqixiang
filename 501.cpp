#include<iostream>
using namespace std;
class Time            
{
private:               // 数据成员为私有的
    int hour;
    int minute;
    int sec;
public:                // 成员函数为公用的
    // 输入时间
    void inputTime() {
        cin >> hour >> minute >> sec;
    }

    // 输出时间
    void outputTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};
int main()
{
    Time t1;        
    t1.inputTime();
    t1.outputTime();
    return 0;
}