#include<iostream>

int main()
{
    using namespace std;
    double wages[3] = {1000.0, 2000.0, 3000.0};
    short stacks[3] = {3, 2, 1};

//两种赋值
    double * pw = wages;
    short * pd = &stacks[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";   //加1后的变化
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "pd = " << pd << ",*pd  = " << *pd << endl;
    pd = pd + 1;
    cout << "add 1 to the pd pointer:\n";   //加1后的变化
    cout << "pd = " << pd << ", *pd = " << *pd << endl;

    return 0;

}