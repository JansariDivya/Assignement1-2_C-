/*--------------------------------------Note: I have done FILE_NAME changed edited on 25-3-2022-----------------------------------------------------------------*/

/*Problem : - Program to implement Class template with the use of Static Variable*/

#include<iostream>
using namespace std;

template <class T>
class Decrement
{
	public:
	void displayincri()
	{
		static T i=10.6;
		cout<<++i<<endl;
		cout<<"i: "<<i<<endl;
	}
};//end of class Decrement

template <class T1>
class increment
{
	public:
	void displaydecri()
	{
		static T1 i=10.6;
		cout<<--i<<endl;
		cout<<"i: "<<i<<endl;
	}
};//end of class Increment



int main()
{
	increment<int>ob1;  //object of increment class
	Decrement<double>ob2,ob3; //object of decrement class
	ob1.displaydecri(); //calling function of increment class
	ob2.displayincri();  //calling function of decrement class
	ob3.displayincri();
return 0;
}

