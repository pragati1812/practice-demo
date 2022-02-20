#include<stdio.h>
#define PI 3.142
void main()
{
	int r,choice;
	float area,c,vol;
 
	printf("\n Enter the radius of circle:- ");
	scanf("%d",&r);
 
	printf("\n Please make a choice from the following :");
	printf("\n \n Options:\t \t \t \t"); 
	printf("Actions:");
	printf("\n \n 1. Area of the circle :");
	printf("\t \tCompute area of the circle and print");
	printf("\n \n 2. Circumference of the circle ");
	printf("\tCompute circumference of circle and print");
	printf("\n \n 3. Area of the sphere ");
	printf("\t \t        Compute volume of sphere and print \n \n ");
	scanf("%d",&choice);
 
	switch(choice)
	{
 
	case 1:
	area=PI*r*r;
	printf("\n The area of the circle is %f \n \n",area);
	break;
 
	case 2:
	c=2*PI*r;
	printf("\n The circumference of the circle is %f \n \n",c);
	break;
 
	case 3:
	vol=(4/3)*PI*r*r;
	printf("\n The volume of the sphere is %f \n \n",vol);
	break;
 
	default:
	printf("\n You haven made invalid choice \n \n");
 
	}
} // End of the code 
 
 
