#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    double pi;
        pi = 3.1415926535;
        int angl;
        std::cout << "Enter the degree measure of the angle= ";
        std::cin >> angl;
        double radian;
        radian = angl * (pi/180);
        std::cout << "Radian:";
        std::cout << radian << endl;
        std::cout << "Press Enter to continue..." << endl;
        cin.ignore(1, '/ n');
        cin.get();
        return 0;




}

