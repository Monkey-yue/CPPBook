/* 两种参数 计算参数的立方 */
#include <iostream>
double cube(double a);
double refcube(double &ra);
int main()
{
    using namespace std;
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x <<endl;  
    
    cout << refcube(x);
    cout << " = cube of " << x << endl;
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double &ra)  // 形参影响实参
{
    ra *= ra * ra;
    return ra;
}