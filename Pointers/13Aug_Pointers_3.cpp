#include <iostream>
using namespace std;

void Print(int *p) {
    cout << "Value of P : " << *p << endl;
}

void Update(int *p) {

    //p = p + 1;

    cout << "Inside Update p : " << *p << endl;
    cout << "Inside Update : adding value " << endl;
    (*p) = (*p) + 1;
    cout << "Inside After Update p : " << *p << endl;

}

int GetSum(int arr[], int n) {
    cout << "Size of ARR : " << sizeof(arr) << endl;
    int sum = 0;
    for(int i =0; i < n ; i++) {
        sum+=i[arr];

    }
    return sum;
}


int main() {
    char ch[6] = "abcde";
    cout << ch << endl;
    // COUT ki implementation int & char arrays me different hai

    char *C = &ch[0];
    cout <<"C : " << C << endl;

    int value = 99;

    int *p = &value;
    // char *c = "abcde" -> BILKUL NAHI KARNA 
    Print(p);
    cout << "Before p : " << *p << endl;

    Update(p);
    cout << "After p : " << *p << endl;

    int arr[5] = {1,2,3,4,5};

    // function ke andaar jab array pass karte ha , toh array pass nahi hoti, uske first element ka first address pass ho raha ha -> POINTER pass ho raha hai

    cout << "Get SUm : " << GetSum(arr,5);

}