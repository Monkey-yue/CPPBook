#include<iostream>

using namespace std;

int main()
{
    int tacos[10] = {5, 2, 8, 4, 1, 2, 2, 4, 6, 8};
    int * pt = tacos;
    pt = pt + 1;

    int *pe = &tacos[9];

    pe = pe - 1;
    int diff = pe - pt;

    cout << diff << "\n" << pe ;

    return 0;
}