#include <iostream>

using namespace std;

int main() {
	int counter = 0;
	int number;
	std::cout << "Enter the number: ";
	std::cin >> number;

	int maxCounter = 0;
	int maxDivN = 1;

	if (number <= 0) { std::cout << "You have entered wrong number";}

	else {
		for (int i = 1; i <= number; i++) {
			counter = 0;
			for (int j = 1; j <= i; j++) {
				if (i % j == 0) {
					counter++;
				}
			}
			if (counter >= maxCounter) {
				maxDivN = i;
				maxCounter = counter;
			}
		}
	}
	std::cout << "The number with the biggest sum of dividers = " << maxDivN;
	cin.ignore(1, '/ n');
	cin.get();
}