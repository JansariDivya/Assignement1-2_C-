#include <iostream>
using namespace std;

int sum(int x,float y,int z)
{
    return (x+y+z);
}

/*int sum(float y,int x)
{
    cout<<"float";
    return (x+y);
}*/
int sum(float x,float y)
{
    cout<<"int";
    return (x+y);
}

/*float sum(float x,float y)
{
    cout<<"float";
    return (x+y);
}*/
int sum(int x)
{
    return (x);
}
int main()
{
    cout<<"Sum is (5,5,5):"<<sum(5,5.6,5)<<endl<<endl;
    cout<<"Sum is (5,5):"<<sum(5.5,2.55)<<endl<<endl;
    cout<<"Sum is (5):"<<sum(5)<<endl<<endl;
    return (0);
}

