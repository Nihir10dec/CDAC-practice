#include<stdio.h>

int main()
{
	int i,j, a[10], c=1 , flag=0;
	int a1[8]={21,45,21,7,45,7 , 21 , 89};
	a[0] = a1[0];
	for(i=1;i<8;i++)
	{
		for(j=i;j>0;j--)
		{
			if(a1[i]==a1[j-1])
				{
					flag=1;
				}
				
		}
		if(flag==0)
		{
		a[c]=a1[i];
		c++;
		
		}
	flag=0;
	}
	for(i=0;i<4;i++)
	{
		printf("%d \n",a[i]);
	}
getch();
return 0;
}