#include <iostream>
#include "A.h"
#include "B.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    A* object = new A("test");

    cout << object->GetName() << endl;

}