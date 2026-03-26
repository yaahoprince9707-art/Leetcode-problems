#include <iostream>
using namespace std;
double pow(double x, int n)
{
    double ans = 1.0;
    long long int nn = n;
    if (nn < 0)
    {
        nn = -1 * nn;
    }
    while (nn)
    {
        if (nn % 2)
        {
            ans = ans * x;
            nn = nn - 1;
        }
        else
        {
            x = x * x;
            nn = nn / 2;
        }
    }
    if (n < 0)
    {
        ans = 1.0 / ans;
    }
    return ans;
}
int main()
{
    double x;
    int n;
    cout << "enter the value of x and n : " << endl;
    cin >> x >> n;
    double ans = pow(x, n);
    cout << "the x raised to n : " << ans;
    return 0;
}