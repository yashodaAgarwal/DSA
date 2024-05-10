//Dutch NAtion Flag

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {0, 0, 1, 0, 0, 2, 2, 2, 2, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1};
    int i = 0;
    int j = 0;
    int k = arr.size() - 1;

    while (j <= k)
    {
        if (arr[j] == 1)
        {
            j++;
        }
        else if (arr[j] == 2)
        {
            swap(arr[j], arr[k]);
            k--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}