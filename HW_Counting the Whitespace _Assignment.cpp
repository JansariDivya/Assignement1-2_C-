/*-----------------------------------Note: I have done FILE_NAME changed edited on 25-3-2022--------------------------------------------------------------------------*/
/* Problem:- Counting the whitespaces in the file ----------*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  ifstream myfile;
  int line_count=0;
  char c;

  myfile.open("file.txt");

  if(!myfile)
  cout<<"file cannot open\n";
  else{
  cout<<"file opened\n";

  //performing space count
  while(myfile.get(c))
  {
    if(isspace(c))
    {
    line_count++;
    }
  }
}

cout<<"total space in file id: "<<line_count<<endl;
myfile.close();

}
