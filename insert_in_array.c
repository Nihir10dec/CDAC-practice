#include<stdio.h>
int main()
{
	int i,j, n=8 , flag;
	int a1[8]={0,1,2,3,5,6,7};
	printf("enter index and number");
	scanf("%d" , &i);
	scanf("%d" , &j);

	flag = a1[i];

	for( int x=6;x>i;x--)
	{
		a1[x+1] = a1[x];
	}
	printf("%d %d %d" , i,j,flag);
	a1[i]=j;
	a1[i+1]=flag;
    
    for(int y=0;y<n;y++)
    {
        printf("%d \n" , a1[y]);
    }

	
	return 0;
}
