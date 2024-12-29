#include <iostream>

using namespace std;

int main() {
    cout <<"put the value and find sum of all multiple of 3 and 5\n";
    cout <<"x : ";
    unsigned int x(0);
    cin >> x;
    long long sum(0);
    for(int i = 3;i < x;i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << "sum = "<<sum<<endl;
    return 0;
}
