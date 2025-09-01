#include <iostream>
#include "Die.h"

using namespace std;

Die::Die(size_t sides){

}

int Die::face() const {
    return _value;
}

void Die::roll() {
    _value = cs102::random(6);
}