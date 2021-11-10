#include <iostream>
#include "mytime1.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    cout << "coding + fixing = ";   // 符号表示法 因为类型是Time实例相加，如果是两个int类则会普普通通相加
    total.Show();
    cout << endl;

    Time morefixing(3, 28);
    cout << "more fixing time = ";  
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);    // 函数表示法
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;

    return 0;
}