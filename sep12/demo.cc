#include <iostream>

using namespace std;

void printArray(int array[]) {
  for (size_t i = 0; i < sizeof(array)/sizeof(int); i++) {
    cout << i << ": " << array[i] << endl;
  }
}

int main() {
  int A[12];
  int B[12];

  for (size_t i = 0; i < sizeof(B)/sizeof(int); i++) {
    B[i] = i + 10;
  }

  for (size_t i = 0; i < sizeof(A)/sizeof(int); i++) {
    A[i] = i;
  }
  for (size_t i = 0; i < sizeof(A)/sizeof(int); i++) {
    cout << i << ": " << A[i] << endl;
  }
  for (size_t i = 0; i < sizeof(B)/sizeof(int); i++) {
    cout << i << ": " << B[i] << endl;
  }
  cout << A << endl;
  cout << B << endl;
  cout << B - A << endl;
}
