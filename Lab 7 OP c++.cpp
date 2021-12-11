#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));

	int snailPos;
	int lastEl = rand() % 200 + 100;
	int snailMovement;
	do {
		snailPos = rand() % 300 + 1;
	} while (snailPos > lastEl);


	int k = rand() % 300 + 1;

	std::cout << "The tree is " << lastEl << " cm height" << endl;
	std::cout << "The snail is " << snailPos << " cm from the earth" << endl;


	int a[300] = { 0 };
	a[0] = snailPos;
	a[299] = lastEl;

	int i = 1;

	do {
		snailMovement = rand() % 2 + 1;

		if (snailPos <= 0) { std::cout << i << ") The snail is on the beginnig of the tree " << endl; a[i] = 0; i++; continue; }
		if (snailPos >= lastEl) { std::cout << i << ") The snail is on the top of the tree " << endl; a[i] = lastEl; i++; continue; }
		if (snailMovement == 2) { snailPos += 2; a[i] = snailPos; std::cout << i << ") the day was sunny" << endl; }
		if (snailMovement == 1) { snailPos -= 1; a[i] = snailPos; std::cout << i << ") the day was rainy" << endl; }



		i++;
	} while (i <= k);


	std::cout << "The snail is on " << a[k] << " attitude";


	cin.ignore(1, '/n');
	cin.get();

}