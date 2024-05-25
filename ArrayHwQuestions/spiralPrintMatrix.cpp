#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int top = 0;
    int down = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    int dir = 0;
    vector<int> result;

    while (top <= down && left <= right)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
            {
                result.push_back(matrix[top][i]);
            }
            top++;
        }
        if (dir == 1)
        {
            for (int i = top; i <= down; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;
        }
        if (dir == 2)
        {
            for (int i = right; i >= left; i--)
            {
                result.push_back(matrix[down][i]);
            }
            down--;
        }
        if (dir == 3)
        {
            for (int i = down; i >= top; i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
        dir++;
        if (dir == 4)
            dir = 0;
    }

    return result;
}
int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result = spiralOrder(matrix);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return -1;
}