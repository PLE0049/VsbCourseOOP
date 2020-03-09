#include "StudentsGroup.h"
#include <iostream>

StudentsGroup::StudentsGroup(string name, int capacity, int gradesMaxCount, Teacher* t)
{
	this->name = name;

	this->capacity = capacity;
	this->students = new Student * [capacity];
	this->studentsCount = 0;

	this->teacher = t;

	this->grades = new Grade * [gradesMaxCount];
	this->gradesMaxCount = gradesMaxCount;
	this->gradesCount = 0;
}

StudentsGroup::StudentsGroup(int capacity, int gradesMaxCount)
{
	this->name = "Undefined";

	this->capacity = capacity;
	this->students = new Student * [capacity];
	this->studentsCount = 0;

	this->teacher = nullptr;

	this->grades = new Grade * [gradesMaxCount];
	this->gradesMaxCount = gradesMaxCount;
	this->gradesCount = 0;
}

StudentsGroup::~StudentsGroup()
{
	for (int i = 0; i < this->studentsCount; i++)
	{
		delete this->students[i];
	}
	delete[] this->students;

	for (int i = 0; i < this->gradesCount; i++)
	{
		delete this->grades[i];
	}
	delete[] this->grades;

	delete this->teacher;
}

void StudentsGroup::SetTeacher(Teacher* t)
{
	this->teacher = t;
}

Teacher* StudentsGroup::GetTeacher()
{
	return this->teacher;
}

void StudentsGroup::AddStudent(Student* s)
{
	this->students[this->studentsCount] = s;
	this->studentsCount++;
}

Student* StudentsGroup::GetStudentById(int id)
{
	for (int i = 0; i < this->studentsCount; i++)
	{
		if (this->students[i]->GetId() == id)
			return this->students[i];
	}

	return nullptr;
}

void StudentsGroup::AddGrade(Grade* g)
{
	this->grades[this->gradesCount] = g;
	this->gradesCount++;
}

double StudentsGroup::GetAverageGradeForStudent(int studentId)
{
	if (!this->doesStudentExists(studentId))
		return -1;

	double sum = 0;
	double count = 0;
	for (int i = 0; i < this->gradesCount; i++)
	{
		if (this->grades[i]->GetStudent()->GetId() == studentId)
		{
			sum += this->grades[i]->GetValue();
			count++;
		}
	}

	return sum / count;
}

void StudentsGroup::PrintGroupReport()
{
	for (int i = 0; i < this->studentsCount; i++)
	{
		Student* s = this->students[i];
		cout << "#" <<i << " Id: " << s->GetId() << " Name: " << s->GetName() << " Grade: " << this->GetAverageGradeForStudent(s->GetId()) << endl;
	}
}

bool StudentsGroup::doesStudentExists(int id)
{
	for (int i = 0; i < this->studentsCount; i++)
	{
		if (this->students[i]->GetId() == id)
		{
			return true;
		}
	}

	return false;
}