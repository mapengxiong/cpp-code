/*数列加和，1，1，2，3，5，8，13，21，34，55，
 递归算法，自己调用自己的函数
  Foo(i)函数

*/
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
 
int Foo(int i)
{
  if(i<=0)
  return 0;
  else if(i>0&&i<=2)
  return 1;
  else
  return Foo(i-1)+Foo(i-2);
}
 
int main()
{
   int i;
  cin>>i;
   cout<<Foo(i)<<endl;
  return 0; 
    
   
}
