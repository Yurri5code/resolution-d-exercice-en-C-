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

int main()
{
    cout <<"Put the value and find primes digits\n";
    cout <<"x =";
    int x(0);
    cin >> x;

    for(int i = x;i > 1;i--) {
        if(is_prime(i)) {
            if((i - 6)>= 1 && is_prime(i - 6)) {
                cout <<"("<<i<<","<<i - 6<<")\n";
            }
        }
    }
    return 0;
}

/*
 *ma solution resout le probleme en partant de la fin et donc en partant du nombre
 *entrer et ainsi tendons vers 0, et a l'inverse sa solution elle du debut et tant vers le
 *nombre 
* int main()
{
    int limit = 0;
    cout <<"Upper limit :";
    cin >> limit;

    for(int n = 0;n <= limit;n++){
        if(is_prime(n) && is_prime(n+6)){
            cout <<n<<","<<n+6<<endl;
        }
    }
    return 0;
}
 */
