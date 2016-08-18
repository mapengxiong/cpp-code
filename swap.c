/*************************************************************************
    > File Name: swap.c
    > Author: mpx
    > Mail: mpx@163.com 
    > Created Time: 2015年08月22日 星期六 10时31分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

void swap1(int a,int b);
void swap2(int *a,int *b);
void swap3(int &a,int &b);

int main(){
	int x=2,y=3;
	swap1(x,y);
	cout<<"x="<<x;
	cout<<"  y="<<y<<endl;

	swap2(&x,&y);
    cout<<"x="<<x;
	cout<<"y="<<y<<endl;

	swap3(x,y);
	cout<<"x="<<x;
	cout<<"y="<<y<<endl;

}

void swap1(int a,int b){
	int temp = a;
	    a = b;
		b = temp;
}

void swap2(int *a,int *b){
	int temp = *a;
	        *a = *b;
			*b = temp;
}

void swap3(int &a,int &b){
	int temp = a;
	    a = b;
		b = temp;
}
