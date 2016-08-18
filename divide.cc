/*************************************************************************
    > File Name: divide.cc
    > Author: mapx
    > Mail: mapx@pmo.ac.cn 
    > Created Time: 2016年06月30日 星期四 19时18分42秒
 ************************************************************************/

#include<iostream>
//using namespace std;
//#include <iostream>
#include <sstream>
using namespace std;
int main()
{

	    istringstream istr ("12  323.5" );
		    cout << istr.str()<<endl;
		    int a;
		    istr>>a;
		    cout<<"int a="<<a<<endl;
		    float b;
		    istr>>b;
		    cout<<"float b="<<b<<endl;
	       return 0;
}

