#include<iostream>
using namespace std;

//declare a class
class Wall{
 private:
  double length;

 public:
   Wall(){
    length=5.5;
    cout<<"Creating a wall."<<end1;
    cout<<"Length="<<length<<end1;
   }
};

int main(){
  Wall wall1;
  return 0;
}
