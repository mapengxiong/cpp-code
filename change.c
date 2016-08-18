#include<iostream>
using std::cin;
using std::cout;
using std::endl;
//void swap1(int &i,int &j)
//void swap2(int i.int j)
//{ 
//    if (i==j)
//   
//   return ;
//   int tep=j;
//      j=i;
//      i=tep;
//cout<<i<<"\t"<<j<<endl;
//}

void swap3(int *b,int *c)
{
 int temp;
  temp=*b;
 *b=*c;
 *c=temp ;
}  //b是指针，*b是内存里的值，temp=*b，把变量值给变量，正确。
//如定义temp为指针的话，int *temp，这里temp就是指针，temp代表地址，*b是变量值，变量值代替地址当然不正确，其他同理
//void swap4(int *b,int *c)
//{
 // int *temp;
 // temp=b;
  //b=c;
 // c=temp;
//}
int main()
{
  int v1,v2;
  cin>>v1>>v2;
 swap3(&v1,&v2);
  //swap3(&v1,&v2);
 //swap2(&v1,&v2);
 //swap4(&v1,&v2);
  cout<<v1<<"\t"<<v2<<endl;
//http://www.cnblogs.com/Romi/archive/2012/08/09/2630014.html   具体的分析见这个网页，四个区别。
 return 0;  
  
  
}
