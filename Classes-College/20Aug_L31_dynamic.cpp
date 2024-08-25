#include <iostream>
using namespace std;
class complex {
    int x;
    int y;
    public:
    complex() {
        x = 0;
        y = 0;
    }
    complex(int a) {
        x = a;
        y = a;
    }
    complex(int a , int b) {
        x = a;
        y = b;
    }
    void add(complex c1 , complex c2) {
        x = c1.x + c2.x;
        y = c1.y + c2.y;
    }
    void display() {
        cout << x << " + " << y << "i" << endl;
    }
};
int main() {
    int x,y;
    cout <<"Enter the real & imaginary part : ";
    cin >> x;
    complex c1(x);
    cout <<"\nFirst Complex Number : ";
    c1.display();
    cout <<"\n---Second Complex number---\n";
    cout <<"Enter the real part : ";
    cin >> x;
    cout <<"Enter the imaginary part : ";
    cin >> y;
    complex c2(x,y);
    c2.display();
    cout <<"\n---Addition of Complex Numbers---\n";
    complex c3;
    c3.add(c1,c2);
    c3.display();  
}
