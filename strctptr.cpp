/* 结构函数的指针传递 */
#include <iostream>
#include <cmath>

struct polar    //极坐标
{
   double distance;
   double angle;
};

struct rect // 直角坐标
{
    double x;
    double y;
};

void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);


int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

void show_polar(const polar * pda)
{
    using namespace std; 
    const double Rad_to_deg = 5729577951;

    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << " degress\n";
}

void rect_to_polar(const rect * pxy, polar * pda)
{
    using namespace std;
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
} 