#include "Person.h"
#include <string>
#include <iostream>
using namespace std;
 

Person::Person(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthDate)
{
	this->id = id;
	this->lastname = lastname;
	this->firstname = firstname;
	this->gender = gender;
	this->birthDate = birthDate;
}
Person::Person()
{
}
string Person::getId() const
{
	return id + "hello";
}

string Person::getLastname() const
{
	return lastname;
}

string Person::getFirstname() const
{
	return firstname;
}

string Person::getGender() const
{
	return gender;
}

string Person::getBirthDate() const
{
	return birthDate;
}

void Person::setId(const string& id)
{
	this->id = id;
}

void Person::setLastname(const string& lastname)
{
	this->lastname = lastname;
}

void Person::setFirstname(const string& firstname)
{
	this->firstname = firstname;
}

void Person::setGender(const string& gender)
{
	this->gender = gender;
}

void Person::setgetBirthDate(const string& birthDate)
{
	this->birthDate = birthDate;
}

void Person::display() const
{
	cout << "ID: " << id << endl;
	cout << "姓: " << lastname << endl;
	cout << "名: " << firstname << endl;
	cout << "性別: " << gender << endl;
	cout << "生日: " << birthDate << endl;
}
