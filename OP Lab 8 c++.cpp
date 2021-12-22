#include <iostream>
#include <math.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

void printArray(int** arr, const int N);
void fillArray(int** arr, const int N);
void checkArr(int** arr, const int N);


int main() {
    srand(time(NULL));

    int size = 0;
    size = rand() % 6 + 2;

    int** p = new int* [size];  
    for (int i = 0; i < size; i++) {
        p[i] = new int[size];  
    }
   
    fillArray(p, size);     
    printArray(p, size);
    checkArr(p, size);

    for (int i = 0; i < size; i++) {
        delete[]p[i];        
    }
    delete[]p;   
    cin.get();
}

void checkArr(int** arr, const int N) {
    int counter;
    int counter_2 = arr[1][1];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            if ((i == 0 || i == N - 1) && (j == 0 || j == N - 1)){
                counter = arr[i][j];
                if (counter < counter_2){
                    counter_2 = counter;}
            }
            else{
                continue;}
        }
    }
    cout << "\nThe minimal corner element is: " << counter_2;
}

void printArray(int** arr, const int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            printf(" %4d ", arr[i][j]);
            if (j == N - 1) printf("\n");
        }
    }
}

void fillArray(int** arr, const int N) {   //В параметрах указательная переменная, будущая массивом, и число ячеек массива

    int i = 1, j, k, p = N / 2;
    for (k = 1; k <= p; k++)/*Цикл по номеру витка*/
    {
        for (j = k - 1; j < N - k + 1; j++) arr[k - 1][j] = i++;/*Определение значений верхнего гор столбца*/
        for (j = k; j < N - k + 1; j++) arr[j][N - k] = i++;/* --//-- По правому вертикальному столбцу*/
        for (j = N - k - 1; j >= k - 1; --j) arr[N - k][j] = i++;/* --//-- по нижнему горизонтальному столбцу*/
        for (j = N - k - 1; j >= k; j--) arr[j][k - 1] = i++;/* --//-- по левому вертикальному столбцу*/
    }
    if (N % 2 == 1) arr[p][p] = N * N;
}