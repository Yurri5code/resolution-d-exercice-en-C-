#include <iostream>

using namespace std;

bool isPrime(const int x) {
    int i = 2,is = 0;
    while(i <= x) {
        if(x % i == 0) {
            is++;
        }
        if(is >= 2) {
            return false;
        }
        i++;
    }
    return true;
}

bool is_prime(const int num) {
    if(num <= 3) {
        return num > 1;
    }else if(num % 2 == 0 || num % 3 == 0) {
        return false;
    }else {
        for(int i = 5; i * i <=  num;i += 6) {
            if(num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}

/*
 * int main (){
 * std::cout <<"Upper limit :";
 * std::cin >> limit;
 *
 * for(int i = limit;i > 1;i--){
 * if(is_prime(i)){
 * std::cout <<"Largest prime : "<<i << std::end;
 * return 0;
 * }
 * }
 * }
 */

int main() {
    cout <<"put the value and find the prime digit before it\n";
    cout <<"x =";
    int x(0),i(2),prime = 0;
    cin >> x;

    while(i <= x) {
        if(isPrime(i)) {
            prime = i;
        }
        i++;
    }
    cout <<"the prime number is : "<<prime<<endl;
    return 0;
}
