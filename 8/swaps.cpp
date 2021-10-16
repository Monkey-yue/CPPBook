/* 三种不同的函数参数以及调用 */
#include <iostream>
void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);
int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" <<wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;

    cout << "Using references to swap cotents:\n";
    swapr(wallet1, wallet2);    // 引用传递
    cout << "wallet1 = $" <<wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;
    
    cout << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2);  // 指针作为参数
    cout << "wallet1 = $" <<wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;

    cout << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2);    // 无效
    cout << "wallet1 = $" <<wallet1;
    cout << " wallet2 = $" << wallet2 <<endl;
    return 0;
}

void swapr(int & a, int & b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swapp(int * p, int * q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)
{
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}