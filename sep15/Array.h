#if !defined(ARRAY_H)
#define ARRAY_H

#include <cs102>

class Array : cs102Object {
 public:
  Array(size_t capacity, int default_value);
  void print() const;
  int get(size_t index) const;
  void put(size_t index, int value);
 private:
  size_t _capacity;
  int _contents[100];
};

#endif
