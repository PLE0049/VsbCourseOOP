# Vsb Course - OOP - 2020

Welcome, this project is dedicated to a course that I am teaching on VSB TU Ostrava and will cover all code snippets that will be presented on each lecture.

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
In this lecture, we will continue with very simple examples to practice some of the new introduced techniques and terms. For example we will explore options of getters, setters and constructors.

### Excercises
* Dictionary: Array of KeyValues objects
* Point: Class holding information about coordinates X and Y
* Curve: Class that holds list of points and can add new points to array

## Lecture 4:

In this lecture we will implement two separate examples and try to practice some known principles. 
So far lot of excercies was in code-along model, now we will try unassisted coding.

### Excercises
* Bank, account and client - example from presentation
* User, Auth: Class with email and password, class with login function - [detailed uml](UserAuth.png)

## Lecture 5
In this lectuer we will implement snippet of information system of small school and ambulance. These snippets will be consisted out of 4 classes. There will be minimum of new syntax and principles and we will focus on practicing previously learned things.

### Excercise
#### School
Implement small IS for **School**. One StudentsGroup will contain list of students, teacher and list of grades. StudentGroup allows to assign students to group, assign teacher, set name, get list of students, get student by name, insert grades and compute final grade for one or all students.

#### Ambulance
Implement small is for an **Ambulance**. Ambulance manages **Doctors** and **Patients**. When patient comes to ambulance, personel tries to find his record. If there is none, patient is recorded. After that there created instance of **Diagnose**. The patient, doctor and date must be filled to the diagnose befor even examination begins. Diagnose should have status set as pending. After that, examination is provided and doctor fills a title, text and status of diagnose.

## Literature
Go to [literature page](Literature.md) for complete list.

## Disclaimer

All codes that are writen in this repository are just snippets and I do not guarantee their correctness. Even though I tried to make them corrent there could be thinkgs that cannot be interpreted without context or simply there was not enough time to fix it.

:warning: If you find anything that can be fixed or moddified, feel free to create PR with chages.
