#include <iostream>
#include <numeric>
using namespace std;

unsigned int gcd(unsigned int a, unsigned int b) {
    while(b != 0) {
        const unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

unsigned int lcm(int const a,int const b) {
    unsigned int h = gcd(a,b);
    return h ? (a*(b / h)) : 0;
}
/*
 * dans la bibliotheque <numeric> il existe une fonction deja prete
 * pour calculer le lmc
 * int lmc(int ,int);
 */
//pour calculer le plus petit commun multiple pour trois nombres et plus

template <class InputIt>
int lcmr(InputIt first,InputIt last) {
    return std::accumulate(first, last, 1, lcm);
}

/*
 * en C++17 il existe la fonction [constexpr] dans la bibliotheque <numeric> gcd(), pour calculer le plus
 * grand diviseur commun de deux nombre
 * gcd(unsigned int a,unsigned in
 */

int main()
{
    cout <<"Put two values \n";
    cout <<"x =";
    int x(0),y(0);
    cin >> x;
    cout <<"y =";
    cin >> y;

    cout <<"the commun divider is : "<<lcm(x,y)<<endl;
    return 0;
}
