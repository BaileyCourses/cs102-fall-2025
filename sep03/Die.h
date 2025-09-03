#if !defined(DIE_H)
#define DIE_H

#include <cs102>

class Die : cs102Object {
    public:
    Die(size_t sides = 6);
    int face() const;
    void roll();
    private:
    size_t _value;
};

#endif
