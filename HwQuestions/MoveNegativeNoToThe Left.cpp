#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {-1, -2, 3, 5, 7, 2, -1, -4, -2, -8};
    int j = 0;
    int k = arr.size() - 1;

    while (j <= k)
    {
        if (arr[j] >= 0)
        {
            swap(arr[j], arr[k]);
            k--;
        }
        else
        {
            j++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
