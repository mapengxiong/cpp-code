/*************************************************************************
    > File Name: cppppc.cc
    > Author: mapx
    > Mail: mapx@pmo.ac.cn 
    > Created Time: 2016年06月30日 星期四 21时05分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int a = 5,b = 5;
	int c = ++a;
	std::cout<<"c = "<<c<<"\t"<<"a = "<<a<<std::endl;
	int d = b++;
	std::cout<<"d = "<<d<<"\t"<<"b = "<<b<<std::endl;

	return 0;
}
