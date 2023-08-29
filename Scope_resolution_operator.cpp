#include <iostream>
using namespace std;
// Class holds different data members and methods
class Car{
public :
      string name;     // variables are nothing but data members
      void display();   // functions are nothing but data methods

};
void Car :: display()     // :: is nothing but scope resolution operator
{
	cout << name << endl;
}
int main()
{
	// There are two ways to declare an object
	// First way is to declare the object as a variable. And it occupies the stack memory
	// We access the members of the object using the dot operator.
	Car c1;
	c1.name = "BENZ";
	c1.display();
	// Second way is to create a pointer variable for the object
	// In this we declare the objects dynamically and it occupies the heap memory
	// We access the members of the object  using the arrow operator
	Car *c2 = new Car;
	c2->name = "AUDI";
	c2->display();
	// In other way we can assign one object two the another object
	Car *c3 = &c1;
	c3->display(); /* it is equals to (*c3).display and we have to use braces for pointer
	 because dot operator precedence is greater than the arrow operator */
}