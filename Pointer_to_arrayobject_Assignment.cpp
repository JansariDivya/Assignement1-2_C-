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

// Driver code
int main()
{

Student std[3];

Student *ptr = std;
int i;


// Accessing the function
for(i = 0; i < 3; i++)
{
	ptr->getdata();
	ptr++;
}
cout << "Employee Data - " << endl;

ptr=std;
// Accessing the function
for(i = 0; i < 3; i++)
{
	ptr->putdata();
	ptr++;
}
}

