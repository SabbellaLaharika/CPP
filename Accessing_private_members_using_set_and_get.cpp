#include <iostream>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
// Class holds different data members and methods
class Car{
private :/* We can't make changes to private members out of a class so we use 
          this public sets and gets method to make changes to them*/
      string name;     
      int cost;
public :    // We use public methods to change the private members of a class
     void SetData(int val, string word)
     {
     	    cost = val;
     	    name = word;
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
	/*Car c2(2,"AUDI");   /* We can't use this in this way because here we have not 
	                 declared any constructors for that purpose */ 
	string carid;
	int worth;
	getline(cin, carid);      // To read a line of input
	cin >> worth;
	c1.SetData(worth,carid);/* We can't make changes to private members out of a class
                        so we use this public sets and gets method to make changes to them*/
	c1.GetData();
	//c2.GetData();
	
}