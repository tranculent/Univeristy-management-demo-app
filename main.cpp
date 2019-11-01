#include <stdio.h>
#include <stdlib.h>

#include "Student.h"
#include "Lecturer.h"

int main() {
	Lecturer lecturers[3];
	lecturers[0] = Lecturer("Adam", 29, 'M', "Computing", "AI", "CS303");
	lecturers[1] = Lecturer("Maverick", 47, 'M', "Business", "Finance", "B209");
	lecturers[2] = Lecturer("Julia", 33, 'F', "Arts", "History of Arts", "HA222");

	Student students[4];
	students[0] = Student("Dimitri", 19, 'M', "Computer Science", "Physics", 131, "CS222", 30);
	students[1] = Student("Michael", 21, 'M', "Computer Science", "AI", 333, "CS303", 60);
	students[2] = Student("Ann", 20, 'M', "Business Management", "Finance", 222, "B209", 88);
	students[3] = Student("Mike", 20, 'M', "Computer Science", "Physics", 130, "CS303", 50);


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (lecturers[i].getUniClass().compare(students[j].getUniClass()) == 0)
				lecturers[i].addStudent(students[j]);
		}
	}
	cout << "Grade: " << students[3].getGrade() << endl;
	//Student &studentToBeAltered = lecturers[0].findByName("Michael");
	lecturers[0].alterGrade(students[3], 5);
	cout << "Grade: " << students[3].getGrade() << endl;

	// print mentees
	for (int i = 0; i < 3; i++) {
		cout << "Size: " << lecturers[i].getStudentsSize() << endl;
	}

	cout << "Name Before: " << students[0].getName() << endl;

	students[0].swapName(students[2]);

	cout << "Name After: " << students[0].getName() << endl;

	return 0;
}
