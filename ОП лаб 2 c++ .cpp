#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	float x;
	std::cout << "Enter the x:";
	std::cin >> x;
	float y;
	std::cout << "Enter the y:";
	std::cin >> y;
	int R;
	R = 3;
	string ans;

	if (x >= -3 && x <= 3 && y >= -3 && y <= 0 && (pow(x, 2) + pow(y, 2)) > pow(R, 2)) {
		cout << "The dot is in the 3d or 4th quarter of shaded area" << ans << endl;
	}

	else if (x >= 0 && x <= 3 && y >= 0 && y <= 3 && (pow(x, 2) + pow(y, 2)) > pow(R, 2)) {
		cout << "The dot is in the 1st quarter of shaded area" << ans << endl;
	}
	else { cout << " The dot is not in the shaded area " << ans << endl; }
	cin.ignore(1, '/n');
	cin.get();
	return 0;
}