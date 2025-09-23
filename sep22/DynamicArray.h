#if !defined(DYNAMIC_ARRAY_H)
#define DYNAMIC_ARRAY_H

#include <cs102>

class DynamicArray : cs102Object {
 public:
  typedef std::string item_t;
  DynamicArray(size_t size);
  void put(size_t index, int value);
  int get(size_t index) const;
  void print(std::ostream& stream) const;
 private:
  size_t _size;
  int* _values;
};

std::ostream& operator << (std::ostream& stream, const DynamicArray& array);

#endif
