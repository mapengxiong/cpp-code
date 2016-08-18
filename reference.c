#include<iostream>
using std::cin;
using std::cout;
using std::endl;
 int &func1()
{ 
  int i;
   i=1;
   return i;
  
}
int main()
 {
   int b = func1(); 
  return 0;
}

