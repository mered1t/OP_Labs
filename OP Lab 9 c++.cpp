#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

int maxFind(std::string);
void minFind(std::string, int);

int main()
{
    using namespace std;

    std::string str;
    cout << "Enter a string:" << endl;
    getline(cin, str);

    int numb;

    numb = maxFind(str);
    minFind(str, numb);

    cin.ignore(1, '\n');
    cin.get();
}

int maxFind(std::string str) {   // Функція знаходження максимального елементу

    char ch_max = 0;   // Елемент з макс. кількістю входжень
    int k;               // k накопичує кількість повторювань певного елементу
    int max = 0;

    for (int j = 0; str[j]; j++) {     // Програма бере поточний елемент
        k = 0;
        for (int i = j + 1; i < str.size(); i++) {

            if (str[j] == str[i]) {

                while (str[j] == str[i]) {   // Порівняння з іншими елементами
                    str.erase(i, 1);
                    k++;
                }
            }
        }
        k++;

        std::cout << str[j] << ": " << k << std::endl;

        if (k > max) {           // Знаходження елементу з максимальною кількістю повторювань
            max = k;
            ch_max = str[j];
        }
    }
    std::cout << "The most frequent symbol: \"" << ch_max << "\" repeats " << max << " time(s)" << "\n";

    return max;
}

void minFind(std::string str, int numb) {  //Функція знаходження мінімального елементу

    int storage = 1;
    int k;
    char ch_min = 0;
    int min = numb;

    for (int j = 0; str[j]; j++) {     // Програма бере поточний елемент

        k = 0;
        for (int i = j + 1; i < str.size(); i++) {

            if (str[j] == str[i]) {

                while (str[j] == str[i]) {     // Порівняння з іншими елементами
                    str.erase(i, 1);
                    k++;
                }
            }
        }
        k++;

        if (k < min) {   // Пошук мінімального елементу
            min = k;
            ch_min = str[j];
        }

    }
    std::cout << "The least frequent symbol: \"" << ch_min << "\" repeats " << min << " time(s)" << "\n";
}