#include <iostream>
#include "A.h"
#include "B.h"
#include "Mage.h"
#include "Warior.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main()
{
    /* Example 1 */
    A* objectA = new A("test object a");

    cout << objectA->GetName() << endl;
    objectA->MyMethod();

    B* objectB = new B("objB");

    cout << objectB->GetName() << endl;

    A* objectAB = new B("sdfsdf");
    cout << objectAB->GetName() << endl;

    /* Example 2*/
    Mage* mage = new Mage("FrostMageABC123", 1500, 1400);
    Warior* warrior = new Warior("Warior123", 5000, 250, 40);

    // TODO: try call strike

    /* Example 3*/
    Rectangle* rec = new Rectangle(5, 2);

    cout << rec->GetPerimeter() << endl;

    Square* sqr = new Square(5);

    cout << sqr->GetPerimeter() << endl;
}