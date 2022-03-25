/*------------------------------Note: I have done FILE_NAME changed edited on 25-3-2022-----------------------------------------------------------------------*/

/* Problem : - Function returning the reference  */

#include <iostream>

using namespace std;


int& max(int &,int &);

int main()
{
    
    int a=5,b=6,ans;
    ans = max(a,b);
    cout<<"Maximum="<<ans;
    

    return 0;
}

//Function returns Reference
int& max(int &x,int &y)
{
    if(x>y)
	x++
    return (x);
    else
	y++
    return (y);
}


