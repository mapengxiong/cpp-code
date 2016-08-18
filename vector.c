/*
   容器的申明，添加元素以及读取元素，注意下标操作，变量的作用域是一个必须重视的问题（全局和局部作用域）for
循环的条件是判断是否循环进行的条件。
 添加元素并进行涉及下标的运算，内容是两头计算，第一个和倒数第一个求和，第二个和倒数第二个求和，依次类推。
当涉及奇偶数目的vector元素是，进行判断，偶数数目的元素全部都进行运算，而奇数数目的元素，最中间的元素不加，特地指示出来。
*/
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main(){
   vector<int> ivec;
    int cnt=37;
   while(cnt>0){

   ivec.push_back(cnt--);

 }

for(vector<int>::size_type n=0;n<ivec.size();++n){
   cout<<ivec[n]<<'\t';
  if((n+1)%6==0){
  cout<<endl;
  }
}
  cout<<endl;
 vector<int>::size_type numb=0;
  for(vector<int>::size_type first=0 ,last=ivec.size()-1;first<last;++first,--last){
 //循环条件不符合之后不会进行后面的自增（自减运算）
    cout<<ivec[first]+ivec[last]<<'\t';
   ++numb;  
  if(numb%3==0) {
    cout<<endl;
   }
}
     if(ivec.size()%2!=0){ 
     cout<<endl;
     cout<<"The center element is not been summed";
     cout<<"its value is ";
     cout<<ivec[(ivec.size()-1)/2]<<endl;           
   }

//指明奇数数目的最中间元素，因为它不涉及进计算。
return 0;

}
