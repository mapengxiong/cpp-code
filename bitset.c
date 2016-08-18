#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
   
  unsigned long ul1=3, ul2=7;

  unsigned long result1=ul1 & ul2;
// inclusive and(位与运算)
  unsigned long result2=ul1 | ul2;
 //inclusive or(位或运算)
  unsigned long result3=ul1<<1;
  // bitset: move to  left side 1 bit.
  bool status1,status2;

  status1=ul1 && ul2;
// logic "and"
  status2=ul1 || ul2;
// logic "or"
  cout<<result1<<'\t'<<result2<<'\t'<<result3<<endl;
  cout<<status1<<'\t'<<status2<<endl;
  short dynode = (128  & 0x000f);//pow(2,n) results equal zero;
  cout<<"dynode "<<dynode<<endl;
 return  0;

}
