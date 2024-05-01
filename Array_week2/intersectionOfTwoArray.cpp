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
                ans.push_back(arr[i]);
            }
        }
    }
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

// Leet code soln
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        int flag = 0;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    nums2[j] = -1;
                    if (flag == 0)
                        ans.push_back(nums1[i]);
                    flag++;
                }
            }
            flag = 0;
        }
        return ans;
    }
};