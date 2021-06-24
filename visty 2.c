//a code to find area and perimeter of rectangle
#include<stdio.h>
int main()
{
	float l,w,area,perimeter;//variable declaration
	
	printf("Enter your width and length\n");
	scanf("%d%d",&w,&l);
	
	area=(w*l);//formula to find area
	perimeter=(2*(w+l));//formula to find perimeter
	
	printf("AREA IS:%f\nPERIMETER IS:%f",area,perimeter);//out put of area and perimeter

	return 0;
}
