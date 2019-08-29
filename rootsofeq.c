//C code to find roots of quadritic equation
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2,D,real,img;
	printf("input coefficients of x^2, x, constant term ");
	scanf("%d%d%d",&a,&b,&c);
	//we have the coefficients
	D= b*b - 4*a*c;
	if(D==0)
	{
		x1= -b/(2*a);
		x2= x1;
		printf("the roots are equal and value is %.2f",x1);
	}
	else if(D>0)
	{
		x1= (-b + sqrt(D))/(2*a);
		x2= (-b - sqrt(D))/(2*a);
		printf(" the roots of equation  are %.2f , %.2f",x1,x2);
	}
	else
	{
		real= -b/(2*a);
		img=sqrt(-D)/(2*a);
		if(real==0)
		{
			printf(" the roots of equation  are i%.2f and - i%.2f",img,img);
		}
		else
		{
			printf(" the roots of equation  are %.1f + i%.2f and %.1f - i%.2f",real,img,real,img);	
		}
		
	}
	
	return 0;
}
