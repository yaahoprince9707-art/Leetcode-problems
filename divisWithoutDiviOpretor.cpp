#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int divide(int dividend, int divisor)
{
    long long int q = 0;
    int flag = 1;
    long num =abs(dividend);
    long dum = abs(divisor);
    cout<<"num ="<<num<<" "<<"dum ="<<dum<<endl;
    if (dividend == divisor)
    {
        return 1;
    }
    if (dividend < 0)
    {
        if (divisor > 0)
        {
            flag = 0;
        }
    }
    else
    {
        if (divisor < 0)
        {
            flag = 0;
        }
    }
    while (num >= dum)
    {
        num -= dum;
        q++;
    }
    if (flag == 0)
    {
        q = (-1) * q;
    }
    if (q > pow(2,31)-1)
        return pow(2,31)-1;
    if (q < (pow(-2, 31)))
        return pow(-2, 31);
    return q;
}
int main()
{
    int n = -2147483648;
    int a = -1;
    // unsigned n2 = n;
    // n = n2;
    //   int a2=-a;
  //  cout << " -n =" << n2 << endl;
    //   cout<<" -a ="<<a2<<endl;

     int ans =divide(n,a);
     cout<<"ans ="<<ans<<endl;
    return 0;
}