#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //char *str1 = "string1", *str2 = "string2";
    const int str_size = 80;
    char *str1, *str2;
    //为两个字符串分配内存
    str1 = new char[str_size];
    str2 = new char[str_size];
   if (str1 == NULL || str2 == NULL) {
     cout << "No enough memory!" << endl;
    return -1;
}
   //输入两个字符串
    cout << "Enter two strings:" << endl;
    cin >> str1 >> str2;
    //比较两个字符串
    int result;
    result = strcmp(str1, str2);
    if (result > 0)
    cout << "\"" << str1 << "\"" << " is bigger than "
    << "\"" << str2 << "\"" << endl;
    else if (result < 0)
    cout << "\"" << str2 << "\"" << " is bigger than "
    << "\"" << str1 << "\"" << endl;
    else
    cout << "They are equal" << endl;
    //释放字符串所占用的内存
    delete [] str1 ;
    delete [] str2 ;
    return 0;
}

