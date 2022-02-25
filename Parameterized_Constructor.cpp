#include <iostream>
using namespace std;
class Student {
   public:
       int id;
       string name;
    
       Student(int i, string n)  
        {  
            id = i;  
            name = n;  
            
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<endl;  
        }  
};
int main(void) {
    Student s1 =Student(101, "Abc"); 
    Student s2=Student(102, "Xyx"); 
    s1.display();  
    s2.display();  
    return 0;
}



