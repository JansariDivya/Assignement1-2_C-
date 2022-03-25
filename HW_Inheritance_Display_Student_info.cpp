
/*------------------------------Note: I have done FILE_NAME changed edited on 25-3-2022-------------------------------------------*/
/*Problem:- Finds the percentage and marks abtained in five subjects in test and display the information of students*/

#include <iostream>
using namespace std;

class student
{
  public:
  int roll_no;
  char name[20];
  
  public:
  
  /*This function inputs rollno and name of student*/
  void setdata()
  {
      cout<<"enter roll_no"<<endl;
      cin>>roll_no;
      cout<<"enter the name"<<endl;
      cin>>name;
  }
  
};

class test
{
    public:
    int marks[5];

    /*This function inputs marks of five subject of student*/
    void setmarks()
    {
        cout<<"Enter the marks of five subjects"<<endl;
        for(int i=0;i<=4;i++)
        {
            cin>>marks[i];
        }
    }
    
};//end of class test

//Result Class
class result : public student,public test
{
    public:
    int totalmarks=0;
    float percentage;
    
    /*This function caluculates totalmarks and percentage of five subjects*/
    void calculateresult()
    {
        for(int i=0;i<=4;i++)
        {
            totalmarks += marks[i];
        }
        
        cout<<"Total marks of five subject: "<<totalmarks<<endl;
        cout<<"percentage : "<<((totalmarks*100)/500)<<endl;
    }
};//end of result class

int main()
{
    result r1;
    r1.setdata(); //setting data
    r1.setmarks(); //setting marks
    r1.calculateresult(); //result calculate
    

    return 0;
}
