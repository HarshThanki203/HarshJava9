#include<stdio.h>
	
	int isPrime(int,int);
	int main(){
	int num,prime;
	printf("\n Enter the prime number: ");
	scanf("%d",&num);
	if(num==0||num==1)
	printf("\n %d is not a prime number: ",num);
	else
	{
		prime=isPrime(num,num/2);
		if(prime==1)
		printf("\n %d is prime Number: ",num);
		else
		printf("\n %d is not a prime Number: ",num);
		
	}	
	return 0;
	
	}

	 int isPrime(int num,int i)
	{
	if(i==1)
		{
			return 1;
			
		}
		else{
			if(num%i==0)
			return 0;
			else
			isPrime(num,i-1);
			
		}
	}
	
      
	

