#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    int total = row * col;
    int startrow = 0;
    int startcol = 0;
    int endrow = row - 1;
    int endcol = col - 1;

    while (count < total)
    {
        // Print Starting row
        for (int index = startcol; count < total && index <= endcol; index++)
        {
            ans.push_back(matrix[startrow][index]);
            count++;
        }
        startrow++;

        // Print ending col
        for (int index = startrow; count < total && index <= endrow; index++)
        {
            ans.push_back(matrix[index][endcol]);
            count++;
        }
        endcol--;

        // PRint ending row
        for (int index = endcol; count < total && index >= startcol; index--)
        {
            ans.push_back(matrix[endrow][index]);

            count++;
        }
        endrow--;

        // PRinting starting col
        for (int index = endrow; count < total && index >= startrow; index--)
        {
            ans.push_back(matrix[index][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {{1,11,111,1111,11111} , {2,22,222,2222,22222} , {3,33,333,3333,33333} , {4,44,444,4444,44444}};
    vector<int> ans = spiralOrder(matrix);

}