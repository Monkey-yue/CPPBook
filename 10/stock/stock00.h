#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock
{
    private:
        std::string company;
        long shares;    // 持有股票数量
        double share_val;   // 单支价格
        double total_val;
        void set_tot()  {total_val = shares * share_val;}   // 内联函数
    
    public:
        void acquire(const std::string & co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};

#endif