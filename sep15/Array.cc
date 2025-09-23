#include <iostream>
#include <cassert>
#include "Array.h"

using namespace std;

Array::Array(size_t capacity, int default_value) {
  _capacity = capacity;

  for (size_t i = 0; i < _capacity; i++) {
    _contents[i] = default_value;
  }
}

void Array::print() const {
  for (size_t i = 0; i < _capacity; i++) {
    cout << _contents[i] << endl;
  }
}

void Array::put(size_t index, int value) {
  assert(index < _capacity);
  _contents[index] = value;
}

int Array::get(size_t index) const {
  assert(index < _capacity);
  return _contents[index];
}
