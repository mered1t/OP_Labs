#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

 long long int fact(int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;
    return i * fact(i - 1);
}

int main()
{
    int n = 1;
    double eps = pow(10, -5);
    float x;
    float sum = 0;

    std::cout << "Enter the number x: ";
    std::cin >> x;

    long double A;


    if (x>=0 && x<=2)
    {

        do {

            std::cout << "n= " << n << endl;
            A = ((n * pow(x, 2) - 1) / (static_cast<__int64>(1) + fact(n)));
            std::cout << "fact= " << fact(n) << endl;
            std::cout << "A = " << A << endl;
            sum += A;
            n = n + 1;

        } while (A > eps);

        std::cout << "Sum= " << sum;
    }

    else std::cout << "You have entered wrong number";

    cin.get();
    cin.ignore(1, '/n');
}