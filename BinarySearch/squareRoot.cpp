#include <iostream>
#include <vector>
using namespace std;

double sqrt(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    double ans = -1;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    int precision;
    cout << "Enter precision digit: " << endl;
    cin >> precision;
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = ans; j * j <= n; j += step)
        {
            // cout<<j;
            ans = j;
        }
        step /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number to find sqrt: " << endl;
    cin >> n;
    double root = sqrt(n);
    cout << "Square root of the number is: " << root << endl;

    return -1;
}