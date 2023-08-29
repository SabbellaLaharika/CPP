#include <iostream>
using namespace std;
class Car{
private :/* We can't make changes to private members out of a class so we use 
          this public sets and gets method to make changes to them.
          We can also access the private members using the constructor.
          */
      string name;     
      int cost;
public :   
     /* To reduce lines of code we use the default values for parameters in parameterized costructor */
     Car(string carid = "No brand", int worth = 0)
     {
     	this -> name = carid;
        this -> cost = worth;
     }
     /* It is a copy constructor
     We use it when we want to use the same data that is already used 
     using the address of that previous data */
     Car(Car &brand)
     {
     	this -> name = brand.name;
     	this -> cost = brand.cost;
     }
     void GetData()
     {
        cout << name << " costs " << cost << " lakh." << endl;
     }

};
int main()
{
	Car c1;
	Car c2("AUDI",3); 
	Car c3("BENZ");
	//Car c4(5);
	Car c5(c2);
	c1.GetData();
	c2.GetData();
	c3.GetData();
	//c4.GetData();
	c5.GetData();
	
}