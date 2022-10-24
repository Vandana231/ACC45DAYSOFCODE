//parameterized constructor
#include<iostream>
using namespace std;

class Professor{
public:
int id;
string name;
float salary;
Professor(int i,string n,float s)
{
id=i;
name=n;
salary=s;
}
void display()
{
cout<<id<<" "<<name<<" "<<salary<<end1;
}
};

int main(void){
Professor p1=Professor(10,"Vandana",90000);
Professor p2=Professor(12,"Anu",50000);
p1.display();
p2.display();
return 0;
}
