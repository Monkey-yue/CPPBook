#include<iostream>
#include<vector>
#include<array>
int main()
{
    using namespace std;
    // C++98 STL
    vector<double> a2(4);
    // C++11
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;

}