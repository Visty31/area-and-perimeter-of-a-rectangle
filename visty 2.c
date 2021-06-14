//a code to find area and perimeter of rectangle
#include<stdio.h>
int main()
{
	int l,w;
	float area,perimeter;//variable declaration
	
	printf("Enter your width and length\n");
	scanf("%d%d",&w,&l);
	
	area=(w*l);//formula to find area
	perimeter=(2*(w+l));//formula to find perimeter
	
	printf("AREA IS:%f\n",area);//out put of area
	printf("PERIMETER IS:%f\n",perimeter);//out put of perimeter
	
	return 0;
}