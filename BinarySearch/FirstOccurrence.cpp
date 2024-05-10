#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (v[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (v[mid] < target)
        {
            s = mid + 1;
        }
        else if (v[mid] > target)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 4, 4, 4, 4, 4, 4, 4, 6, 7, 8, 9, 10};
    int target = 4;
    int ans = firstOccurence(v, target);
    cout << "Found at " << ans << endl;

    return -1;
}