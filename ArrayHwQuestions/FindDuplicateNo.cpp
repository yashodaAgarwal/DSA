#include <iostream>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    // while(nums[0] != nums[nums[0]]){
    //     swap(nums[0],nums[nums[0]]);
    // }
    // return nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[abs(nums[i])] < 0)
        {
            return abs(nums[i]);
        }
        else
        {
            nums[abs(nums[i])] *= -1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums ={1,3,4,2,3}

    int result= findDuplicate(nums);
    cout<<result;
}