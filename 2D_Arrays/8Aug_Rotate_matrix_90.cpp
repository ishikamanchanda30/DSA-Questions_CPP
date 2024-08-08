#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> Rotate90(vector<vector<int>> matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    cout << rows << " " << cols << endl;

    for(int i = 0 ; i < rows ; i++) {
        int x = 0;
        while(x < cols/2) {
            swap(matrix[i][x],matrix[i][cols-x-1]);
            x++;
        }
    }

    for(int i = 0 ; i < rows-1 ; i++) {
        for ( int j = 0; j < cols-1 ; j++) {
            cout << "i : " << i << "    j : " << j << endl;
            swap(matrix[i][j],matrix[j][i]);         
        }
    }    

    for(int i = 0 ; i <= rows-1 ; i++) {
        for (int j = 0; j <= cols ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return matrix;

}

int main() {
    vector< vector<int> > matrix = {{1,2,3},{4,5,6},{7,8,9}};
    Rotate90(matrix);
}