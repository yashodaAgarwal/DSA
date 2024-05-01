#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0};
    int start = 0, i = 0, end = arr.size() - 1;

    while (i != end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        else if (arr[i] == 1)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }
    for (auto value : arr)
    {
        cout << value << " ";
    }
}