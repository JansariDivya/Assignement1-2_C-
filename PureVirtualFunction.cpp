//Problem:- C++ program to implement Pure virtual function

#include <iostream>  
using namespace std;  

class Mammal  
{  
    public:  
    virtual void show() = 0;  //Pure virtual function declaration.
};  //end of the class

class Man: public Mammal 
{  
    public:  
    void show()  
    {  
        cout << "Man is the part of animal husbandry " << endl;  
    }  
};  //end of the class


int main()  
{  
    Mammal *aptr; //Base class pointer 
    //Animal a;  
    Man m;  //derived class object creation.
    aptr = &m;  
    aptr->show();  
    return 0;  
}

              
