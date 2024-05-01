#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sizeA = 7;
    int brr[] = {6, 7, 8, 9, 10};
    int sizeB = 5;
    vector<int> ans;

    for (int i = 0; i < sizeA; i++)
    {
        for (int j = 0; j < sizeB; j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = -1;
            }
        }
    }
    for (int i = 0; i < sizeA; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeB; i++)
    {
        if (brr[i] != -1)
            ans.push_back(brr[i]);
    }
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}