#include <iostream>
#include <cstdlib>
#include <ctime>
#define ARRAY_SIZE 10
using namespace std;
void fillArray(int arr[], int size, int minValue, int maxValue) {
   srand(time(nullptr));
   for (int i = 0; i < size; ++i) {
       arr[i] = rand() % (maxValue - minValue + 1) + minValue;
   }
}
int main() {
   const int x = 1;
   const int y = 100;
   int numbers[ARRAY_SIZE];
   fillArray(numbers, ARRAY_SIZE, x, y);
   cout << "Wygenerowana tablica: ";
   for (int i = 0; i < ARRAY_SIZE; ++i) {
       cout << numbers[i] << " ";
   }
   return 0;
}