#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int * func2()
{
 int *p;
  p= new int;
  *p=1;
  return p;
}
int main()
{ 
  int *p =func2();
  cout<<*p<<endl;
  delete p;
  return 0;
}

