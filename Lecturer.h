#pragma once
#include <string.h>
#include <vector> 

#include "Person.h"
#include "Student.h"

using namespace std;

class Lecturer : public Person {
public:
	Lecturer() { cout << "Default constructor" << endl; }
	Lecturer(string name, int age, char gender, string department, string specialization, string uniClass, Mood mood = Happy) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->department = department;
		this->specialization = specialization;
		this->uniClass = uniClass;
		cout << "Overloaded constructor" << endl;
	}
	void setName(string name) {
		cout << "Setting the name of lecturer " << this->name << " to " << name << endl;
		this->name = name;
	}
	void setAge(int age) {
		cout << "Setting the age of lecturer " << this->name << " to " << age << endl;
		this->age = age;
	}
	void setGender(char gender) {
		cout << "Setting the gender of lecturer " << this->name << " to " << gender << endl;
		this->gender = gender;
	}
	void setDepartment(string department) {
		cout << "Setting the department of lecturer " << this->name << " to " << department << endl;
		this->department = department;
	}
	void setSpecialization(string specialization) {
		cout << "Setting the specialization of lecturer " << this->name << " to " << specialization << endl;
		this->specialization = specialization;
	}
	// getter methods
	string getUniClass() {
		cout << "Getting the class that lecturer " << name << " teaches" << endl;
		return uniClass;
	}

	void addStudent(const Student& student) {
		cout << "Adding a student to the mentees of lecturer " << name << endl;
		students.push_back(student);
	}

	int getStudentsSize() {
		cout << "Getting the student size of lecturer " << name << endl;
		return students.size();
	}

	string getName() {
		return name;
	}

	vector<Student> getStudents() {
		cout << "Getting all the students from lecturer " << name << endl;
		return students;
	}

	void alterGrade(Student& student, int grade) {
		student.setGrade(grade);
	}


	Student& findByName(string name) {
		for (auto student : students) {
			if (student.getName().compare(name) == 0) {
				return student;
			}
		}
	}
private:
	string department;
	string specialization;
	string uniClass;
	vector<Student> students;
};