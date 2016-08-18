#include<iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;
void ptrswap(int *&v1,int *&v2)
{
  int *tmp=v2;
   v2=v1;
   v1=tmp;
}
 
int main()
{
  int i=10;
  int j=20;
  int *pi=&i;
  int *pj=&j;
  cout<<*pi<<"\t"<<*pj<<endl;
  ptrswap(pi,pj);
  cout<<*pi<<"\t"<<*pj<<endl;
  return 0;
}
