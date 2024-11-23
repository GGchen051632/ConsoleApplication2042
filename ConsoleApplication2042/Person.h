#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string id;
	string lastname;
	string firstname;
	string gender;
	string birthDate;

public:
	Person(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthDate);
	Person();
	string getId() const;
	string getLastname() const;
	string getFirstname() const;
	string getGender() const;
	string getBirthDate() const;


	void setId(const string& id);
	void setLastname(const string& lastname);
	void setFirstname(const string& firstname);
	void setGender(const string& gender);
	void setgetBirthDate(const string& birthDate);

	void display() const;
};
