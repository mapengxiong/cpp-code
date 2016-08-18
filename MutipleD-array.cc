#include <iostream>
using namespace std;
int main()
{
int ia[3][4] = {
// 3 个元素,每个元素是一个有 4 个 int 元素的数组
{0, 1, 2, 3} , // 0 行的初始化列表
{4, 5, 6, 7} , // 1 行的初始化列表
{8, 9, 10, 11} // 2 行的初始化列表
};
int (*p)[4];
//typedef int int_array[4];//声明，［typedef用于定义类型的同义词］
//int_array *p=ia; //与上一行一起存在，当然也可以不存在，下一句当中定义已经提到
//for (int_array *p = ia; p != ia + 3; ++p)
 for (p = ia; p != ia + 3; ++p)// 使用多维数组名称自动转化为指向该数组的第一个元素的指针
   for (int *q = *p; q != *p + 4; ++q)//P始终是指向四个int型的数组指针，外循环保证P逐一增加，也就是依次第一行四个元素，第二行四个元素，第三行四个元素
         cout <<*q << endl; 
            return 0;
}

