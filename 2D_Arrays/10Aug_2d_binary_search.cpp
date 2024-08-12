// Binary Search in 2D array
#include <iostream>
#include <vector>
using namespace std;

bool BinarySearch2D(vector<vector<int>> matrix,int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int start = 0;
    int end = rows * cols - 1;
    int mid = start + ( end - start) / 2;

    while (start <= end) {
        int element = matrix[mid/cols][mid%cols];
        if(element == target) {
            return 1;
        }
        if( element < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + ( end - start) / 2;  
    }
    return 0;

}

int main() {
    vector<vector<int>> matrix;
    matrix.push_back({1, 3, 5, 7}); 
    matrix.push_back({10, 11, 16, 20});
    matrix.push_back({23, 30, 34, 50});
    int target = 13;
    cout << BinarySearch2D(matrix, target) << endl;

}