



#include <iostream>
#include <string>
#include "Person.h"


using namespace std;
/*!

\param[out] void
\param[in] name - people name
\param[in] age - people age

*/
void ConsoleOut(string name, string age) {

	 cout << "Name: " << name << endl << "Age: " << age << endl;
}
int main()
{
	Person person = Person();/// create class object\a Person
	person.name = "Alex"; 
	person.age = "19"; 
	ConsoleOut(person.name, person.age);



}

