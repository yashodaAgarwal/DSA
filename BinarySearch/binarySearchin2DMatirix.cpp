#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int s = 0;
    int target = 129;
    int rows = 3;
    int cols = 4;
    int e = (rows * cols) - 1;
    int mid = s + (e - s) / 2;
    int flag = -1;
    while (s <= e)
    {
        int rowsIndex = mid / cols;
        int colsIndex = mid % cols;
        if (arr[rowsIndex][colsIndex] == target)
        {
            flag = 1;
            cout << "Found";
            break;
        }
        else if (arr[rowsIndex][colsIndex] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    if (flag == -1)
    {
        cout << "Not Found";
    }
    return -1;
}