#include<stdio.h>
int main()
{
	int i,j=0,k=0,l;
	char sent[100]="I am Nihir Shah";
	char str_arr[5][20];
	char temp;
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
		for(l=0;str_arr[i][l]!='\0';l++);
		for(j=0;j<l/2;j++)
		{
			temp = str_arr[i][j];
			str_arr[i][j] = str_arr[i][l-j-1];
			str_arr[i][l-j-1] = temp;
		}
	}

	for(i=0;i<4;i++)
	{
		printf("%s\n",str_arr[i]);
	}

getch();
return 0;
}
