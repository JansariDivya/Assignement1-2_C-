/* Problem:-  C++ program to  demonstrate the concept of pointer to class memeber of array of three objects.
               and also Tried createing the pointer of the derived class and access the base class objects.*/

#include<iostream>
using namespace std;

class Student
{
int marks;
char name[30];

public:

int id;
// Declaration of function
void getdata();

// Declaration of function
void putdata();
};//end of the class Student

//Inputs the data of the student 
void Student::getdata()
{
cout << "Enter Id : ";
cin >> id;
cout << "Enter Name : ";
cin >> name;
cout<< "ENter the Marks: ";
cin>>marks;
}

//Displays the data of the Student
void Student::putdata()
{
cout << id << " ";
cout << name << " ";
cout << marks << " ";
cout << endl;
}

//derived class
class StudentDerived : public Student
{
	cout<<" This is Derived class";
}

// Driver code
int main()
{

Student std[3];
Student *ptr =std;
StudentDerived *ptrderived =&std; //pointer of the derived class accessing the base class object
int i;


// Accessing the function
for(i = 0; i < 3; i++)
{
	ptr->getdata();
	ptr++;
	//derivedclass object accessing the member function of the base class
	//*ptrderived->getdata(); //throws error as derived class cannot access base class objects
	//*ptrderived++;              
}
cout << "Employee Data - " << endl;

ptr=std;
// Accessing the function
for(i = 0; i < 3; i++)
{       
	ptr->putdata();
	ptr++;
	
	//derivedclass object accessing the member function of the base class
	//*ptrderived->putdata(); //throws error as derived class cannot access base class objects
	//*ptrderived++;
}
}

