#include <iostream>
#include "namesp.h"

namespace pers
{
    using std::cout;
    using std::cin;
    void getPerson(Person & rp)
    {
        cout << "Enter first name: ";
        cin >> rp.fname;
        cout << "Enter last naem: ";
        cin >> rp.lname;
    }
    void showPerson(const Person & rp)
    {
        std::cout << rp.lname << ", " << rp.fname;   // 1
    }
}

namespace debts
{
    void getDebt(Debt & rd)
    {
        getPerson(rd.name); // 使用pers名称空间的getPerson方法，返回Debts结构中的Person类型的name
        std::cout << "Enter debt: ";
        std::cin >> rd.amount;
    }
    void showDebt(const Debt & rd)
    {
        showPerson(rd.name);
        std::cout << ": $" << rd.amount << std::endl;
    }
    double sumDebts(const Debt ar[], int n)
    {
        double total = 0;
        for(int i = 0; i < n; i++)
            total += ar[i].amount;
        return total;
    }
}
