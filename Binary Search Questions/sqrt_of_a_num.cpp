#include <iostream>
#include <math.h>
using namespace std;

long long int SqrtInt(int num) {
    int start = 0;
    int end = num;
    long long int mid = start + (end - start ) / 2;
    while (start <= end) {

        long long int sqr=mid * mid; 
        if(sqr==num) {
            return mid;
        }
        if (sqr > num) {
            end = mid - 1;
        }

        else {
            int ans = mid;
            start = mid+1;
        }
        mid = start + floor(( end - start ))/ 2;
    }
    return mid;
}
double Precision(int num, int precision ,int tempsol) {
    double factor = 1;
    double ans=tempsol;

    for (int i = 0; i < precision; i++) {
        factor /= 10;
        for (double j = ans ; j*j<num;j = j+ factor){
            ans = j;
        }
    }
    return ans;

}

int main() {
    int num;
    cout << "Enter number : ";
    cin >> num;
    int tempsol= SqrtInt(num);
    cout << "Square root of " << num << " is " << Precision(num,3,tempsol);
}

