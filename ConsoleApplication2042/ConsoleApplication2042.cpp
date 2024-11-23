#include <string>
#include "person.h"
#include <iostream>
using namespace std;

int main()
{
    Person person1("A123456789", "Chen", "Jason", "M", "1999-01-01");
    
    Person* person2 = new Person();
    person2->setId("B987654321");
    person2->setLastname("Wang");
    person2->setFirstname("David");
    person2->setGender("M");
    person2->setgetBirthDate("1999-12-13");

    person1.display();
    cout << endl;
    person2->display();
}


