/*************************************************************************
    > File Name: cube.c
    > Author: mpx
    > Mail: mpx@163.com 
    > Created Time: 2015年08月22日 星期六 11时40分01秒
 ************************************************************************/

#include<stdio.h>
#include<iostream>
using namespace std;

void cubeByReference(int *);   //prototype

int main(){
	int number = 5;
	cout<<"the original value of number is "<<number;
	cubeByReference(&number);
	cout<<"\n The new value of number is "<<number<<endl;
}

void cubeByReference(int *ptr){
	*ptr = *ptr * *ptr * *ptr;
}
