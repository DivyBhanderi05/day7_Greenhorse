#include<stdio.h>
main(){
	float s;
	float h;
	float d;
	float t;
	float g;
	printf("Salary : ");
	scanf("%f",&s);
	h = 0.1*s;
	d = 0.05*s;
	t = 0.08*s;
	g = s + h + t + d;
	printf("Gross salary : %.2f",g);
	
	 
}
