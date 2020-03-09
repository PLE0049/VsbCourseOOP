#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Grade.h"
#include "StudentsGroup.h"
#include "School.h"

using namespace std;  
int main()
{
    cout << "Welcome to school IS !\n";

    Student* s = new Student(1, "Jakub", 27);
    cout << "Students name is: " << s->GetName() << endl;

    Grade* g = new Grade(s,1);
    cout << "Student " << g->GetStudent()->GetName();
    cout << " has grade = " << g->GetValue() << endl;

    Teacher* t = new Teacher(1,"Matt");
    cout << "Teachers name is: " << t->GetName() << endl;

    StudentsGroup* group1 = new StudentsGroup("ABC123", 20, 150, t);
    cout << "Teachers name is: " << group1->GetTeacher()->GetName() << endl;

    group1->SetTeacher(new Teacher(2, "Samm"));
    cout << "Teachers name is: " << group1->GetTeacher()->GetName() << endl;

    group1->AddStudent(s);
    cout << "Students name is: " << group1->GetStudentById(1)->GetName() << endl;

    group1->AddGrade(new Grade(s, 1));
    group1->AddGrade(new Grade(s, 3));
    group1->AddGrade(new Grade(s, 2));
    group1->AddGrade(new Grade(s, 1));

    group1->PrintGroupReport();

    delete group1;
}