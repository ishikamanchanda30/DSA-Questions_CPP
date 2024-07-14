#include <iostream>
#include <vector>
using namespace std;

vector <int> reverseArr(vector<int> &vect,int s,int e) {
    int end = vect.size()-1;
    while (s < e) {
        swap(vect[s],vect[e]);
        s++;
        e--;
    }
    return vect;

}

void Print(vector <int> v) {
    for( int i =0; i < v.size();i++) {
        cout << v[i]<< " ";
    }
    cout << endl;
}

int main() {
    int num;
    int index;

    cout << "Enter no. of elements : ";
    cin >> num;
    cout << "Enter index : ";
    cin >> index;

    vector <int> vect;
    int ele;
    for (int i = 0; i < num; i++) {
        cin >> ele;      
        vect.push_back(ele);
    }
    vector <int> vect_ans = reverseArr(vect,index,vect.size()-1);
    Print(vect_ans);
}
