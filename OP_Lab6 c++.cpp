#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>


int sumOfDiv(int num) {

    int accumulator = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            accumulator += i;
        }
    }
    return accumulator;
}

int main() {

    int sum = 0;
    int counter = 0;

    int eps;
    std::cout << "Enter the number: ";
    std::cin >> eps;

    while (counter <= eps) {
        counter++;
        sum = sumOfDiv(counter);
        if (counter == sum) continue;
        if (sumOfDiv(sum) == counter && counter > sum) {
            std::cout << "Amicable pair: " << sum << " and " << counter << std::endl;
        }
    }
  
    std::cin.ignore(1, '/n');
    std::cin.get();

}
