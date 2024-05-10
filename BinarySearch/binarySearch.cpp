#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (v[mid] == target)
        {
            return mid;
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
    return -1;
}
int main()
{
    vector<int> v = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int target = 3;
    int ans = binarySearch(v, target);
    if(ans ==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout << "Found at " << ans << endl;
    }
    

    return -1;
}