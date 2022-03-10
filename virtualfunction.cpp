//Problem :- C++ program to implement virtual funtion

#include <iostream> 
using namespace std;

class A 
{ 
// private by deafult
string data = "Data"; // Original data defined in the base class
public: 
virtual void display() // Virtual function defined in the base class
{ 
cout<<"The data is : "<<data<<endl; 
} 
}; //end of class A


class B: public A 
{ 
string value = "DataFlair"; // Virtual function redefined in the derived class
public: 
void display() 
{ 
cout << "The data is: "<<value<<endl; 
} 
}; //end of class b

int main() 
{
cout<<"Welcome to DataFlair tutorials!"<<endl<<endl;
A *a; 
B b; 
a = &b; 
a-> display(); // Changes reflected in the original data by function call
return 0; 
}
