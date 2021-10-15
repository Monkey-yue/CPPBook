/* BOOL 输出 */
#include<iostream>
int main()
{
    using namespace std;
    int x;

    cout << "The expressiong x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << " Now x = " << x << endl;
    cout.setf(ios_base::boolalpha); // bool 输出
    cout << (x < 3) << endl;

    return 0;
}