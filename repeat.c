#include<iostream>
#include<string>
using namespace std;
int main(){
   string preword ,curword;
   string repword;
   int currcnt =0, maxcnt=1;
   cout<<"Enter some words:"<<endl;
   
   while(cin>>curword){
    if(curword==preword)
       ++currcnt;
      else{
           if(currcnt>maxcnt){ 
             maxcnt=currcnt;
             repword=preword;
          }
              currcnt=1;
        } 
        preword=curword;
    }
    if(maxcnt!=1)
   cout<<'"'<<repword<<'"'<<"repeated for "<<maxcnt<<" times"<<endl;
   else
  cout<<"There is no repeated word"<<endl;
  return 0;
}
