#include <iostream>

using namespace std;

//cette fonctions resous recursivement ce probleme

unsigned int gcd(unsigned int a, unsigned int b) {
    while(b != 0) {
        const unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

//cette fonction resout de facon recursive
unsigned int gcd1(unsigned int a, unsigned int b) {
    return b == 0 ? a : gcd(b,a % b);
}

int main() {
    cout <<" put two values \n";
    cout <<"x  =";
    int x(0),y(0);
    cin >> x;
    cout <<"y =";
    cin >> y;

    int divider = 0,i = 1;
    while(i <= x && i <= y) {
        if(x % i == 0 && y % i == 0) {
            divider = i;
        }
        i++;
    }

    cout <<"the divider is "<<divider<< endl;

    cout <<"the divider is "<<gcd(x,y)<<endl;
    cout <<"the divider is "<<gcd1(x,y)<<endl;
    return 0;
}
