


/**

\param[out] void
\param[in] name - people name
\param[in] age - people age

*/
#include <iostream>
#include <string>
#include "Person.h"


using namespace std;
void ConsoleOut(string name, string age) {

	 cout << "Name: " << name << endl << "Age: " << age << endl;
}
int main()
{
	Person person = Person();/// create class object
	person.name = "Alex"; 
	person.age = "19"; 
	ConsoleOut(person.name, person.age);



}

