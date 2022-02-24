#include<iostream>
using namespace std;
class Unary
{
     int a=40;
     int b=20;
     int c=60;
     public:
         void getvalues()
         {
              cout<<"Values of A, B & C\n";
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
         }
         void show()
         {
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
         }
         void friend operator-(UnaryFriend &x);      
};
void operator-(Unary &x)
{
     x.a = -x.a;     
     x.b = -x.b;
     x.c = -x.c;
}
int main()
{
     UnaryFriend x1;
     x1.getvalues();
     cout<<"Before Overloading\n";
     x1.show();
     cout<<"After Overloading \n";
     -x1;
      x1.show();
      return 0;
}
