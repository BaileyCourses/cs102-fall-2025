#include "WordBank.h"

WordBank::WordBank(size_t minLength, size_t maxLength) : _words(0) {
  _minLength = minLength;
  _maxLength = maxLength;
}
