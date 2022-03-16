#include<iostream>
#include<fstream>
using namespace std;



int main()
{
ifstream myfile;
int line_count=0;
char c;



//myfile.open("file.txt",ios::in);
myfile.open("file.txt");



if(!myfile)
cout<<"file cannot open\n";
else{
cout<<"file opened\n";



while(myfile.get(c)){
if(isspace(c)){
line_count++;
//cout<<str<<endl;
}
}
}

cout<<"total space in file id: "<<line_count<<endl;
myfile.close();



}
