/*************************************************************************
    > File Name: ofstream.c
    > Author: Ma PengXiong
    > Mail: mapx@pmo.ac.cn 
    > Created Time: 2016年01月23日 星期六 15时14分52秒
 ************************************************************************/

#include<stdio.h>
#include <iostream>     // std::cout
#include <fstream>      // std::fstream

int main () {

	  char buffer [80];
	    std::fstream myfile;

		  myfile.open ("test.txt",std::fstream::in);
		  
		    myfile << "test";
			  if (myfile.fail())
				    {

						    std::cout << "Error writing to test.txt\n";
							    myfile.clear();
								  }
			  
			    myfile.getline (buffer,80);
				  std::cout << buffer << " successfully read from file.\n";
				  
				    return 0;
}
