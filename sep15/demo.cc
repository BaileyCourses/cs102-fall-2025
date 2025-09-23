#include <iostream>
#include "Array.h"

using namespace std;

/*
void printArray(int array[], size_t size) {
  for (size_t i = 0; i < sizeof(array)/sizeof(int); i++) {
    cout << array[i] << endl;
  }
}
*/
int main() {
  Array A(30, 1);

  A.put(20, 10);
  cout << A.get(20) << endl;

  A.print();

    //  int A[] = {20, 30, 40};
  //  int B[] = {21, 32, 43};

  //  printArray(A, sizeof(A)/sizeof(int));

  
}
