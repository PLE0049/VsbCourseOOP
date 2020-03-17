#include <iostream>
#include "Teacher.h"
#include "Student.h"

using namespace std;
int main()
{
    Teacher* t = new Teacher("Petr A");

    string name = t->GetName();

    Student* s = new Student("Jakub", "PLE123");
    cout << s->GetName() << endl;
    cout << s->GetLogin() << endl;
}