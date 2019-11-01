#pragma once
#include <string.h>
#include <vector> 
#include "Person.h"

class Student : public Person {
public:
	Student() { cout << "Default constructor" << endl; }

	Student(string name, int age, char gender, string major, string minor, int studentId, string uniClass, int grade, Mood mood = Happy) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->major = major;
		this->minor = minor;
		this->studentId = studentId;
		this->uniClass = uniClass;
		this->grade = grade;
		cout << "Overloaded constructor" << endl;
	}
	void setName(string name) {
		cout << "Setting the name of student " << this->name << " to " << name << endl;
		this->name = name;
	}
	void setAge(int age) {
		cout << "Setting the age of student " << this->name << " to " << age << endl;
		this->age = age;
	}
	void setGender(char gender) {
		cout << "Setting the gender of student " << this->name << " to " << gender << endl;
		this->gender = gender;
	}
	void setMajor(string major) {
		cout << "Setting the major of student " << this->name << " to " << major << endl;
		this->major = major;
	}
	void setMinor(string minor) {
		cout << "Setting the minor of student " << this->name << " to " << minor << endl;
		this->minor = minor;
	}

	void setGrade(int grade) {
		cout << "Setting the grade of student " << this->name << " to " << grade << endl;
		this->grade = grade;
	}
	// getter methods
	string getUniClass() {
		cout << "Getting the class student " << name << " attends" << endl;
		return uniClass;
	}

	string getName() {
		return name;
	}

	int getGrade() {
		return grade;
	}

	void swapName(Student& student) {
		using std::swap;
		swap(this->name, student.name);
	}
private:
	int studentId;
	string major;
	string minor;
	string uniClass;
	int grade;
};