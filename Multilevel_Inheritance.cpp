#include <iostream>
using namespace std;

class person
{
public:
int a1=1;
void fun1()
{
	cout<<"Inside public:"<<a1<<endl;
}
protected:
int a2=2;
void fun2()
{
	cout<<"INside protected:"<<a2<<endl;
}
private:
int a3=3;
void fun3()
{
	cout<<"INside private:"<<a3<<endl;
}


};

class doctor :public person
{
 public:
int d1=6;
 void fun4()
{
	cout<<"Inside derived:"<<d1<<endl;
	cout<<"Inside derived a2:"<<a2<<endl;
	fun2();
}

};

class surgeon :public doctor
{
 public:
int d10=6;
 void fun4()
{
	cout<<"Inside surgeon:"<<endl;
	cout<<"Inside surgeon d1:"<<d1<<endl;
	cout<<"Inside surgeon a1:"<<a1<<endl;
	cout<<"Inside surgeon a2:"<<a2<<endl;
        
	//cout<<"Inside surgeon a3:"<<a3<<endl;
}

};



int main()
{
doctor d1;
surgeon s1;
d1.fun1();
cout<<endl;
d1.fun4();
//d1.fun2();
cout<<endl;
s1.fun4();
//d1.fun3();
cout<<endl;
//d1.fun4();
cout<<endl;
return 0;
