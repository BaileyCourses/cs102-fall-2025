#if !defined(WORDBANK_H)
#define WORDBANK_H

#include <cs102>
#include <iostream>
#include <cstdlib>
#include <string>
#include "DynamicArray.h"

class WordBank : cs102Object {
 public:
  typedef DynamicArray::item_t item_t;
  WordBank(size_t minLength, size_t maxLength);
  size_t size() const;
  item_t operator [] (size_t index) const;
  bool isWord(item_t word) const;
  void print(std::ostream& stream) const;
 private:
  size_t _minLength;
  size_t _maxLength;
  DynamicArray _words;
};

std::ostream& operator << (std::ostream& stream, const WordBank& bank);

#endif
