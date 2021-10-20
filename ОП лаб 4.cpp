#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>


using namespace std;

int main()
{

    float q, r, b, c, d, x, fXprev, fResult;
    int n;

    int nLoopCount;

    std::cout << "Enter the q: ";
    std::cin >> q;

    std::cout << "Enter the r: ";
    std::cin >> r;

    std::cout << "Enter the b: ";
    std::cin >> b;

    std::cout << "Enter the c: ";
    std::cin >> c;

    std::cout << "Enter the d: ";
    std::cin >> d;

    std::cout << "Enter the n: ";
    std::cin >> n;

    x = d;
    fXprev = c;

    for (int k = 2; k <= n; k++) {
        nLoopCount = k - 1;
        std::cout << "There is " << nLoopCount << " loop" << endl;
        std::cout << "x= " << x << endl;
        std::cout << "fXprev= " << fXprev << endl;
        fResult = q * x + r * fXprev + b;
        std::cout << "res= " << fResult << endl;
        fXprev = x;
        x = fResult;

    }
    std::cout << "x" << n << "=" << fResult;
    cin.ignore(1, '/n');
    cin.get();

}