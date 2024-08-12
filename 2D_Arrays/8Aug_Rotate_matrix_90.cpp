#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> Transpose(vector<vector<int>> matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    cout << "\n--- TRANSPOSE ---\n";
    for(int i = 0 ; i < rows ; i++) {
        for(int j = i+1 ; j < cols ; j++) {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    for(int i = 0 ; i <= rows-1 ; i++) {
        for (int j = 0; j <= cols-1 ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return matrix;

}

vector<vector<int>> RevRow(vector<vector<int>> matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    cout <<"\n---REVERSING ROWS---\n";
    for(int i = 0 ; i < rows ; i++) {
        int x = 0;
        while(x < cols/2) {
            swap(matrix[i][x],matrix[i][cols-x-1]);
            x++;
        }
    }

    // for(int i = 0 ; i < rows-1 ; i++) {
    //     for ( int j = 0; j < cols-1 ; j++) {
    //         cout << "i : " << i << "    j : " << j << endl;
    //         swap(matrix[i][j],matrix[j][i]);         
    //     }
    // }    

    for(int i = 0 ; i <= rows-1 ; i++) {
        for (int j = 0; j <= cols-1 ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return matrix;

}

int main() {
    vector< vector<int> > matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans = Transpose(matrix);
    RevRow(ans);
}