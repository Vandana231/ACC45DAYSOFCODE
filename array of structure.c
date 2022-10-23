#include<stdio.h>
#include<string.h>

struct student
{
int id;
char name[30];
float percentage;
};
int main()
{
int i;
struct student record[3];
record[0].id=1;            //1st student record
strcpy(record[0].name,"Vandana");
record[0].percentage=86.5;
record[1].id=2;            //2nd student record00
strcpy(record[1].name,"shatakshi");
record[1].percentage=90.5;
record[2].id=3;            //3rd student record
strcpy(record[2].name,"vaishali");
record[2].percentage=81.5;
for(i=0;i<3;i++){
printf("id is %d\n name is %s\n percentage is %f \n",record[i].id,record[i].name,record[i].percentage);
}
return 0;
}
