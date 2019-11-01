#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
public:
	enum Mood { Moody, Happy, Sad, Energetic };
	virtual void setName(string name) = 0;
	virtual void setAge(int age) = 0;
	virtual void setGender(char gender) = 0;

	 friend std::ostream& operator<<(std::ostream& os, Person& person) {
		return os << "I am a person and my name is " << person.name;
	 }

	void cannotOverride() {
		cout << "Hello World!" << endl;
	}

	string as_string()
	{
		cout << "Printing out the type of the current Alarm object as a string." << endl;
		switch (mood) {
		case Moody: return "Moody";
		case Happy:  return "Happy";
		case Sad:  return "Sad";
		case Energetic: return "Energetic";
		default:       return "Invalid";
		}
	}

protected:
	 string name;
	 int age;
	 char gender;
	 Mood mood;
};

