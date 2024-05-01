#include <iostream>
#include <vector>

using namespace std;

vector<int> threeSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[i] + nums[j] + nums[k] == target)
                {
                    return {i, j, k};
                }
            }
        }
    }
    return {};
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int target = 9;
    vector<int> ans = threeSum(arr, target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}