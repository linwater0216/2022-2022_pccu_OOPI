#include "situation.h"

int situation::getoutpay()
{
    return outpay;
}
int situation::getincome()
{
    return income;
}
int situation::getbalance()
{
    return income - outpay;
}
void situation::setincome(int a)
{
    income = a;
}
void situation::setoutpay(int a)
{
    outpay = a;
}
