//programme to convert number into words 
#include<Stdio.h>
int main()
{
	int n,rev,len,temp,r;
	printf("enter any number ");
	scanf("%d",&n);
	temp=n;
	for(rev=0,len=0;temp>0;)
	{
		r=temp%10;
		len++;
		rev=rev*10 +r;
		temp=temp/10;
	}
	//printf("%d\t%d",rev,len); now we have reverse and length
			
	switch(len)
	{
		case 1:
			if(n==0)
			{
				printf("zero");
			}
			else if(n==1)
			{
				printf("one");
			}
			else if(n==2)
			{
				printf("two");
			}
			else if(n==3)
			{
				printf("three");
			}
			else if(n==4)
			{
				printf("four");
			}
			else if(n==5)
			{
				printf("five");
			}
			else if(n==6)
			{
				printf("six");
			}
			else if(n==7)
			{
				printf("seven");
			}
			else if(n==8)
			{
				printf("eight");
			}
			else
			{
				printf("nine");
			}
			break;
		case 2:
			r=rev%10;
			rev=rev/10;
			if(r==1)
			{
				printf("bhot hard");
				/*if(rev==)
				{
					printf("");
				}*/
			}
			else if(r==2)
			{
				printf("twenty ");
			    if(rev==1)
				{
					printf("one");
				}
				else if(rev==2)
				{
					printf("two");
				}
				else if(rev==3)
				{
					printf("three");
				}
				else if(rev==4)
				{
					printf("four");
				}
				else if(rev==5)
				{
					printf("five");
				}
				else if(rev==6)
				{
					printf("six");
				}
				else if(rev==7)
				{
					printf("seven");
				}
				else if(rev==8)
				{
					printf("eight");
				}
				else if(rev==9)
				{
					printf("nine");
				}
				else
				{
					break;
				}
				
			}
			else if(r==3)
			{
				printf("thirty ");
				if(rev==1)
				{
					printf("one");
				}
				else if(rev==2)
				{
					printf("two");
				}
				else if(rev==3)
				{
					printf("three");
				}
				else if(rev==4)
				{
					printf("four");
				}
				else if(rev==5)
				{
					printf("five");
				}
				else if(rev==6)
				{
					printf("six");
				}
				else if(rev==7)
				{
					printf("seven");
				}
				else if(rev==8)
				{
					printf("eight");
				}
				else if(rev==9)
				{
					printf("nine");
				}
				else
				{
					break;
				}
			}
			else if(r==4)
			{
				printf("forty ");
				if(rev==1)
				{
					printf("one");
				}
				else if(rev==2)
				{
					printf("two");
				}
				else if(rev==3)
				{
					printf("three");
				}
				else if(rev==4)
				{
					printf("four");
				}
				else if(rev==5)
				{
					printf("five");
				}
				else if(rev==6)
				{
					printf("six");
				}
				else if(rev==7)
				{
					printf("seven");
				}
				else if(rev==8)
				{
					printf("eight");
				}
				else if(rev==9)
				{
					printf("nine");
				}
				else
				{
					break;
				}
			}
			else if(r==5)
			{
				printf("fifty ");
				if(rev==1)
				{
					printf("one");
				}
				else if(rev==2)
				{
					printf("two");
				}
				else if(rev==3)
				{
					printf("three");
				}
				else if(rev==4)
				{
					printf("four");
				}
				else if(rev==5)
				{
					printf("five");
				}
				else if(rev==6)
				{
					printf("six");
				}
				else if(rev==7)
				{
					printf("seven");
				}
				else if(rev==8)
				{
					printf("eight");
				}
				else if(rev==9)
				{
					printf("nine");
				}
				else
				{
					break;
				}
			}
			else if(r==6)
			{
				printf("sixty ");
				if(rev==1)
				{
					printf("one");
				}
				else if(rev==2)
				{
					printf("two");
				}
				else if(rev==3)
				{
					printf("three");
				}
				else if(rev==4)
				{
					printf("four");
				}
				else if(rev==5)
				{
					printf("five");
				}
				else if(rev==6)
				{
					printf("six");
				}
				else if(rev==7)
				{
					printf("seven");
				}
				else if(rev==8)
				{
					printf("eight");
				}
				else if(rev==9)
				{
					printf("nine");
				}
				else
				{
					break;
				}
			}
			else if(r==7)
			{
				printf("seventy ");
				if(rev==1)
				{
					printf("one");
				}
				else if(rev==2)
				{
					printf("two");
				}
				else if(rev==3)
				{
					printf("three");
				}
				else if(rev==4)
				{
					printf("four");
				}
				else if(rev==5)
				{
					printf("five");
				}
				else if(rev==6)
				{
					printf("six");
				}
				else if(rev==7)
				{
					printf("seven");
				}
				else if(rev==8)
				{
					printf("eight");
				}
				else if(rev==9)
				{
					printf("nine");
				}
				else
				{
					break;
				}
			}
			else if(r==8)
			{
				printf("eighty ");
				if(rev==1)
				{
					printf("one");
				}
				else if(rev==2)
				{
					printf("two");
				}
				else if(rev==3)
				{
					printf("three");
				}
				else if(rev==4)
				{
					printf("four");
				}
				else if(rev==5)
				{
					printf("five");
				}
				else if(rev==6)
				{
					printf("six");
				}
				else if(rev==7)
				{
					printf("seven");
				}
				else if(rev==8)
				{
					printf("eight");
				}
				else if(rev==9)
				{
					printf("nine");
				}
				else
				{
					break;
				}
			}
			else
			{
				printf("ninety ");
				if(rev==1)
				{
					printf("one");
				}
				else if(rev==2)
				{
					printf("two");
				}
				else if(rev==3)
				{
					printf("three");
				}
				else if(rev==4)
				{
					printf("four");
				}
				else if(rev==5)
				{
					printf("five");
				}
				else if(rev==6)
				{
					printf("six");
				}
				else if(rev==7)
				{
					printf("seven");
				}
				else if(rev==8)
				{
					printf("eight");
				}
				else if(rev==9)
				{
					printf("nine");
				}
				else
				{
					break;
				}
			}
			break;
		default:
			printf("wait for future updates ");
	}
	return 0;
}
