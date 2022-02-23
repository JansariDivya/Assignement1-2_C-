#include <iostream>

using namespace std;

class Complex
{
    int real,img;
    public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<"The value of the real part:"<<real<<"the img part:"<<img<<endl;
    }
    
   Complex operator +(Complex obj)
    {
        Complex temp;
        temp.real =real + obj.real;
        temp.img =img + obj.img;
        return temp;
    }
    
    Complex operator -(Complex obj)
    {
        Complex temp;
        temp.real =real - obj.real;
        temp.img =img -obj.img;
        return temp;
    }
    
    
    Complex operator *(Complex obj)
    {
        Complex temp;
        temp.real =real * obj.real;
        temp.img =img * obj.img;
        return temp;
    }
    
    Complex operator /(Complex obj)
    {
        Complex temp;
        temp.real =real / obj.real;
        temp.img =img / obj.img;
        return temp;
    }
    
    Complex operator %(Complex obj)
    {
        Complex temp;
        temp.real =real % obj.real;
        temp.img =img % obj.img;
        return temp;
    }
    
    Complex operator ==(Complex obj)
    {
        Complex temp;
        temp.real =obj.real;
        temp.img =obj.img;
        return temp;
    }
    
    Complex operator --()
    {
        Complex temp;
        temp.real = --real;
        temp.img = --img;
        return temp;
    }
    
    Complex operator ++()
    {
        Complex temp;
        temp.real = ++real;
        temp.img = ++img;
        return temp;
    }
    Complex operator ++(int a)
    {
        Complex temp;
        temp.real = real + a;
        temp.img = img + a;
        return temp;
    }
    Complex operator --(int b)
    {
        Complex temp;
        temp.real =real - b;
        temp.img =img - b;
        return temp;
    }
    
    
};

int main()
    {
        Complex c1(20,20),c2(5,5);
        Complex c3;
        c1.display();
        c2.display();
        c3=c1.operator +(c2);
        c3.display();
        c3=c1.operator -(c2);
        c3.display();
        c3=c1.operator *(c2);
        c3.display();
        c3=c1.operator /(c2);
        c3.display();
        c3=c1.operator %(c2);
        c3.display();
        c3==c2;
        c3.display();
        c3=c1.operator ++();
        c3.display();
        c3=c1.operator --();
        c3.display();
        c3=c1.operator ++(2);
        c3.display();
        c3=c1.operator --(2);
        c3.display();
        return(0);
    }
