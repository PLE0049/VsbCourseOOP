#pragma once
#include "Student.h"
#include "Teacher.h"
#include "Grade.h"

using namespace std;
class StudentsGroup
{
private:
	string name;
	Student** students;
	int capacity;
	int studentsCount;
	Teacher* teacher;
	Grade** grades;
	int gradesMaxCount;
	int gradesCount;
	bool doesStudentExists(int id);

public:
	StudentsGroup(string name, int capacity, int gradesMaxCount, Teacher* t);
	StudentsGroup(int capacity, int gradesMaxCount);
	~StudentsGroup();
	void SetTeacher(Teacher* t);
	Teacher* GetTeacher();
	void AddStudent(Student* s);
	Student* GetStudentById(int id);
	void AddGrade(Grade* g);
	// CreateGrade(int grade, Student* s);
	// CreateGrade(int grade, int studentId);
	double GetAverageGradeForStudent(int studentId);
	void PrintGroupReport();
};

