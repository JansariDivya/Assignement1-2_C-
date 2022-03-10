// C++ program to implement
// the above approach
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
};

// Defining the function outside
// the class
void Student::getdata()
{
cout << "Enter Id : ";
cin >> id;
cout << "Enter Name : ";
cin >> name;
cout<< "ENter the Marks: ";
cin>>marks;
}

// Defining the function outside
// the class
void Student::putdata()
{
cout << id << " ";
cout << name << " ";
cout << marks << " ";
cout << endl;
}

class StudentDerived : public Student
{
	cout<<" This is Derived class";
}

// Driver code
int main()
{

Student std[3];
//StudentDerived stdderived[3];
Student *ptr = std;
StudentDerived *ptrderived = stdderived;
int i;


// Accessing the function
for(i = 0; i < 3; i++)
{
	ptr->getdata();
	ptr++;
	//*ptrderived->getdata();
	//*ptrderived++;
}
cout << "Employee Data - " << endl;

ptr=std;
// Accessing the function
for(i = 0; i < 3; i++)
{
	ptr->putdata();
	ptr++;
	//*ptrderived->putdata();
	//*ptrderived++;
}
}

