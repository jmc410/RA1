#include <iostream>
using namespace std;
/*
  Reverse array, inputs a const int array and its size.
  */
int* ReverseArray(int const arr[], int size);

void print(int const arr[], int size);

int main() {
// The original array used.

  const int size = 10;
  int arr[size];

  // Array implementation.

  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
  }

  cout << "Original Array:\n";
  print(arr, size);

  // Reversing the original by calling on the function.

  int* rev = ReverseArray(arr, size);

  cout << "\nReversed array:\n";
  print(rev, size);

  // Deallocate the dynamically allocated reversed array.

  delete[] rev;

  return 0;
  }

// Definitionns of the functions.

int* ReverseArray(int const arr[], int size) {

  // Creating a new dynamic array
  int* newArr = new int[size];

  // Copy the elements in reverse

  for (int i = 0; i < size; i++) {
    newArr[i] = arr[size - 1 - i];
  }

  return newArr;
}

void print(int const arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}


// End of program.