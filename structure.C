/*************************************************************************
    > File Name: sturcture.c
    > Author: mapx
    > Mail: mapx@pmo.ac.cn 
    > Created Time: 2016年04月03日 星期日 15时25分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct inflatable
{
	char name[20];
	float volume;
	double price;

};
int main(){
	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;
	cout<<"bouquet: "<<bouquet.name<<" for $";
	cout<<bouquet.price<<endl;

	choice=bouquet;
	cout<<"choice: "<<choice.price<<" for $";
	cout<<choice.price<<endl;
	inflatable* ps = new inflatable;//动态创建结构体。
	cout<<"Enter name of inflatable item:";
	cin.getline(ps->name,20);
	//cin>>ps->name;//这样不行，cin输入遇到空格，或者回车都会截止，导致后面的输入直接跳过。办法是用cin.getline();
	cout<<"Enter price of inflatable item:";
	cin>>(*ps).price;
	cout<<ps->name<<"\t"<<(*ps).price<<endl;
	delete ps;

}
