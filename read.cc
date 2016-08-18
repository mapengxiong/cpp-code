/*************************************************************************
    > File Name: read.cc
    > Author: mapx
    > Mail: mapx@pmo.ac.cn 
    > Created Time: 2016年06月30日 星期四 17时41分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <fstream>
#include<sstream>
#include<cstring>
int main()
{

	    ifstream in("abc.txt");
		    string line;
			    int num = 0;
				
				    while (getline(in, line))
						    {
         
								num = num+1;
								//if(num <4) 
								//	continue;
        //cout << ++num << "\t:" << line << endl;
		istringstream istr(line);
							int a;
							istr>>a;
							cout<<"a = " <<a<<"\t";
							float b;
							istr>>b;
							cout<<"b = "<<b<<"\t";
							float c;
							istr>>c;
							cout<<"c = "<<c<<endl;

							
							}
					
  return 0;

}
