/*************************************************************************
 *  I removed the old version of this code~
    > File Name: enumeration.cpp
    > Author: mapx
    > Mail: mapx@pmo.ac.cn 
    > Created Time: 2016年04月04日 星期一 11时05分11秒
	new modified
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	enum  spectrum{
   red,orange,yellow,green,blue,violet,indigo,ultraviolet
	};

	spectrum  band;
	band = green;
	cout<<band<<"\n";
	int color1 = red;
	int color2 = blue;
	band =  spectrum(3);
	cout<<color2<<"\t"<<band<<endl;
	double va ;
	va = pow(color2,color1);
	cout<<"va= "<<va<<endl;

}
