//A program to find the area of circle in c

#include<stdio.h>      //link section
#define PI 3.14        //definition section
float r;               //global declarations section
float areaofcircle(float);
int main(void)         //main function section
{
float aoc;           //declaration part
printf("Enter the radius of circle"); //execution part
scanf("%f",&r);
aoc=areaofcircle(r);
printf("area of circle is %f",aoc);
return 0;
}
float areaofcircle(float R)  //User-defined function
{
return(R*R*PI);
}
