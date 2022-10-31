//Sum of the series 8+88+888+8888+------+n terms
#include<stdio.h>
void main()
{
int i,n,sum,t;
sum=0;        //initializing the sum
t=8;          //first term
printf("\n Input the number of terms: ");
scanf("%d",&n);     //no.of terms

for(i=1;i<=n;i++)   //next terms
{
printf("%d",t);
if(i<n)
printf("+");
sum=sum+t;      //increaments the sum
t=(t*10)+8;     //next term
}
printf("\n The sum is:%d\n\n ",sum);    //prints sum
}
