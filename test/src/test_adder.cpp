#include "test_adder.hpp"

#include <cassert>

#include "adder.hpp"

void test_adder(void) {
    int c;
    adder(1, 2, &c);
    assert(c == 3);
}

int main(int argc, char const* argv[])
{
    test_adder();
    return 0;
}

