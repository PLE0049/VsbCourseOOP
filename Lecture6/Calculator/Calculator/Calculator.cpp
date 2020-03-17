#include <iostream>
#include "Math.h"

int main()
{
    std::cout << "Hello World!\n";

    /*
    Math* m = new Math();
    int result = m->Sum(1, 5);
    */

    int result = Math::Sum(1, 5);
}