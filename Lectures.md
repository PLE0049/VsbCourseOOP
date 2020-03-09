# Lectures

## Table of Contents

- [Lecture 1](#lecture-1)
- [Lecture 2](#lecture-2)
- [Lecture 3](#lecture-3)
- [Lecture 4](#lecture-4)
- [Lecture 5](#lecture-5)


## Lecture 1
- Introduction
- Contact jakub.plesnik@gmail.com - jakub.plesnik.st@vsb.cz
- Course overview

## Lecture 2 
In this lecture, we will briefly look into C++ basics and OOP introduction.
The main purpose of this lecture is to look at the first OOP code snippets.

### Exercise
* Calculator: a set of function and class with methods
* Person: class with data
* Television: class with data and methods
* KeyValue: class with a pointer to another instance

## Lecture 3
In this lecture, we will continue with very simple examples to practice some of the newly introduced techniques and terms. For example, we will explore the options of getters, setters, and constructors.

### Exercise
* Dictionary: Array of KeyValues objects
* Point: Class holding information about coordinates X and Y
* Curve: Class that holds a list of points and can add new points to an array

## Lecture 4:

In this lecture, we will implement two separate examples and try to practice some known principles. 
So far a lot of exercises were in the code-along model, now we will try unassisted coding.

### Exercise
* Bank, account and client - example from presentation
* User, Auth: Class with email and password, class with login function - [detailed uml](UserAuth.png)

## Lecture 5
In this lecture, we will implement a snippet of the information system of a small school and ambulance. These snippets will be consisted out of 4 classes. There will be a minimum of new syntax and principles and we will focus on practicing previously learned things.

### Excercise
### School
Implement small IS for **School**. One StudentsGroup will contain a list of students, teachers, and a list of grades. StudentGroup allows to assign of students to a group, assign teacher, set name, get a list of students, get student by name, insert grades and compute final grade for one or all students.

#### Students Group
* -array of students
* -teacher
* -array of grades
* +AddStudent
* +GetAllStudent
* +GetStudentById
* +GetStudentByName(optional)
* +AddTeacher
* +AddGradeToStudent
* +GetAverageGradeForStudent

#### Student
* Id
* Name
* Age

#### Teacher
* Id
* Name

#### Grade
* Student
* Value

### Ambulance
Implement small IS for an **Ambulance**. Ambulance manages **Doctors** and **Patients**. When a patient comes to the ambulance, the personnel tries to find his record. If there is none, the patient is recorded. After that, there created an instance of **Diagnose**. The patient, doctor, and date must be filled to the diagnosis before even examination begins. Diagnose should have the status set as pending. After that, the examination is provided and the doctor fills a title, text, and status of diagnosis.
