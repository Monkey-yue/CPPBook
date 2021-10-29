#include <iostream>
#include "stock20.h"

Stock::Stock()
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr )
{
    company = 0;

    if(n < 0)
    {
        std::cout << "Number of shares can't be negative"
    }
}