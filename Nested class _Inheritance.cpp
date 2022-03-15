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
          p1.found();
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
    n1.display(); // accessing the nested class through derived class
   
    Derived d1;
    d1.found();  //accessing the parent class 
    //t1.got();
    //t1.found();
    //t1.s.display();
   
    //cout<<"b="<<f1.s.b<<endl;
    //f1.s.display();
    return 0;
}

