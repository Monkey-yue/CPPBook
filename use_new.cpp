#include<iostream>

using namespace std;

int main()
{
    int * pt = new int;
    double * pd = new double;

    *pt = 20.0;
    *pd = 70.3;

    cout << *pt << endl << *pd << endl;
    delete pt,pd;

    return 0;
}
