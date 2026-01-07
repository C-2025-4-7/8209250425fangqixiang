// 502student.h - 类声明
class Student
{
public:
    void set_value(int n, const char* nm, char s);  // 新增的成员函数
    void display();  // 原有的成员函数

private:
    int num;
    char name[20];
    char sex;
};