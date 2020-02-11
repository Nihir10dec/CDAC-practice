#include<stdio.h>
int main()
{
	int i,j=0,k=0,flag=1;
	char sent[100]="I am Nihir Shah";
	char str_arr[5][20];

	for(i=0;sent[i]!='\0';i++)
	{
		if(sent[i]!=' ')
		{
			str_arr[j][k]=sent[i];
			k++;
			str_arr[j][k]='\0';

		}
		else
		{
			j++;
			k=0;
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;str_arr[i][j]!='\0';j++)
		{
			printf("%c",str_arr[i][j]);			
		}
		printf("\n");

	}

getch();
return 0;
}