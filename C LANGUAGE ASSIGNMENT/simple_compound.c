#include<stdio.h>
#include<math.h>
void main(){
	
	float p,r,t,a,si,ci;
	printf("Enter Principle=");
	scanf("%f",&p);
	printf("Enter Rate=");
	scanf("%f",&r);
	prinf("Enter Time=");
	scanf("%f",&t);
	
	
	si=(p*r*t)/100;
	
	printf("Simple Interest=%f",si);
	a=p*(prt((1+r/100), t));
	ci = a - p;
	printf("\n Compound Interest=%f",ci);
}
