#include <iostream>
using namespace std;

class Parent
{
 
 // private:
 public:
  int a=8;
  void found()
  {
      cout<<a<<endl;
  }
  public:
  class Nested
  {
      public:
      int b=5;
      void display()
      {
          Parent p1;//creating the parent object
          p1.found();//accessing the parent function using nested class
          cout<<"b="<<b<<endl;
      }
  };
 // Nested s;//creating the nested class object
};

class Derived : public Parent //Derived class
{
 
  public:
  int k=8;
  void got()
  {
      cout<<k<<endl;
  }
 
 
 
};

int main()
{
    Parent :: Nested n1;
    n1.display(); // accessing the nested class function through derived class
    Parent t1;
    Derived d1;
    d1.found();  //accessing the parent class function through nested class object 
    d1.got();
    d1.found(); //accessing the parent class function through derived class object
    t1.s.display(); // accessing the nested class function with parent class object
   
    cout<<"b="<<t1.s.b<<endl; // accessing the member of the nested class with parent class object
    t1.s.display(); //accessing the nested class function with parent class object
    return 0;
}

