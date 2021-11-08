#include <iostream>
#include "mytime0.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60; 
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

// 返回sum创建一个副本
Time Time::Sum(const Time & t) const    // sum是局部变量，如果使用引用则会在函数结束时被删除
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60; // 防止溢出
    sum.minutes %= 60;
    return sum;
}

void Time::Show() const{
    std::cout << hours << " hours, " << minutes << " minutes";
}
