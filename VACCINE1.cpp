#include<iostream>
using namespace std;
int main()
{
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int sum=0;
	int temp=0;
	if(d1<d2)
	{
		int total=d1-1;
		while(sum<p)
		{
			sum =sum+v1;
			if(d1==d2 || temp==1)
			{
				sum=sum+v2;
				temp=1;
			}
			total++;
				d1++;
		}
		printf("%d",total);
		printf("\n");
	}
		else
		{
			int total=d2-1;
			while(sum<p)
			{
				sum=sum+v2;
				if(d1==d2 || temp==1)
				{
					sum=sum+v1;
					temp=1;
				}
			
				total++;
					d2++;
			}
			printf("%d",total);
			printf("\n");
		}
	return 0;	
	}
	
