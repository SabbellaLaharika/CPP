#include <iostream>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
class Car{
private :/* We can't make changes to private members out of a class so we use 
          this public sets and gets method to make changes to them.
          We can also access the private members using the constructor.
          */
      string name;     
      int cost;
public :    // We use public methods to change the private members of a class
     /* it is a default constructor.
     It is used when no arguments are passed through the constructor  */
     Car()
     {
     	name = "No Brand";
     	cost = 0;
     }
     /* It is a parameterized constructor.
     We use it when an parameters are passed */
     Car(string carid, int worth)
     {
     	name = carid;
     	cost = worth;
     } 
     Car(string carid)
     {
     	this -> name = carid;
     	this -> cost = 0; /* Since we have not passed value of worth we defaulted it's value as 0 */
     }
     Car(int worth)
     {
     	this -> name = "No Brand";/* Since we have not passed value of name we defaulted it's value as No brand  */
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
	fast_io;
    TakeInput();
	Car c1;
	Car c2("AUDI",3); 
	Car c3("BENZ");
	Car c4(5);
	Car c5(c2);
	c1.GetData();
	c2.GetData();
	c3.GetData();
	c4.GetData();
	c5.GetData();
	
}