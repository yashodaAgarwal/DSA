#include <iostream>
#include <vector>
using namespace std;

double divide(int divisor, int dividend)
{
    int s = 1;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    double ans = -1;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        else if (abs(mid * divisor) <= abs(dividend))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    int precision = 2;
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = ans; j * abs(divisor) <= abs(dividend); j += step)
        {
            ans = j;
        }
        step /= 10;
    }
    if ((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int divisor = -7;
    int dividend = -29;
    double result = divide(divisor, dividend);
    cout << "The result is: " << result << endl;

    return -1;
}