#include <iostream>
#include <vector>
using namespace std;

void MoveZeros(vector <int> v) {
    for(int i =0, i < v.size();i++) {
        if(v[i] != 0) { 
            swap(v[i],v[i+1]);
        }
    }

}

int main() {
    vector <int> v;

}