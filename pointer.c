#include<iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;
 
int main()
{
  string s="hello world";
  string* p=&s;
  cout<<*p<<endl;
  string s1="some value";
  p =&s1;
  cout<<p<<endl;
  int *a;
  a=(int *)5;
  cout<<"aaaa "<<a<<"       address\t"<<&a<<endl;
  return 0;
}
