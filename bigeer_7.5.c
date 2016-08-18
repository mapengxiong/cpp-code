#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int bigger(int &x, int &y)
{
  if(x>y)
   cout<<x<<endl; 
  else
   cout<<y<<endl;
 return 1;
}

int main()
{
   
 int i,j; 
 cout<<"Input two numbers:"<<endl;
 cin<<i<<j;
 bigger(i,j);
  return 0; 
}
