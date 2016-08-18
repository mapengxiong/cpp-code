#include<iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string s1("some value");
  string *sp1=&s1;
  cout<<*sp1<<endl;
  string s2("hello world");
  string *sp2=&s2;
  //*sp1="a new value";//why can ? pointer assign 
   sp1=sp2;
  cout<<*sp1<<endl;
  return 0;
}
