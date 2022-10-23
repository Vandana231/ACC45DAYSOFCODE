#include<iostream>
using namespace std;

int main(){
 int marks[]={24,25,26};

 int mathmarks[3];
 mathmarks[0]=522;
 mathmarks[1]=322;
 mathmarks[2]=466;

 //cout<<"These are the math marks"<<endl;
 //cout<<mathmarks[0]<<endl;
 //cout<<mathmarks[1]<<endl;
 //cout<<mathmarks[2]<<endl;

 for(int i=0;i<3;i++)
 {
     cout<<"the value of marks"<<i<<marks[i]<<endl;
 }


 return 0;
}
