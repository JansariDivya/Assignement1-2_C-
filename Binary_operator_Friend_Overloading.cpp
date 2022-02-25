#include<iostream>
using namespace std;

class Complex2
{
    int real,img;
    public:
    Complex2()
    {
        real=0;
        img=0;
    }
    Complex2(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<"The value of the real2 part:"<<real<<"the img2 part:"<<img<<endl;
    }
    
  Complex2 operator - (Complex2 obj1)
    {
        Complex2 temp;
            temp.real =obj1.real - real;
            temp.img =obj1.img - img;
            return temp;
    }
    
    friend class Complex1;
    
   
      
 
};

class Complex1
{
    int real,img;
    public:
    Complex1()
    {
        real=0;
        img=0;
    }
    Complex1(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<"The value of the real part:"<<real<<"the img part:"<<img<<endl;
    }
    
   Complex1 operator +(Complex1 obj1)
   {
       Complex1 temp;
        temp.real =obj1.real + real;
        temp.img =obj1.img + img;
        return temp;
   }
   
   Complex1 operator - (Complex2 obj1)
   {
       Complex1 temp;
        temp.real =obj1.real *real;
        temp.img =obj1.img *img;
        return temp;
       
   }
  
  friend class Complex2;
 
};




