#include<stdio.h>
int main()
{
	int i,j,k,flag=1;
	char str1[5];
	char str2[5];
	printf("enter 2 strings");
	gets(str1);
	printf("enter 2 strings");
	gets(str2);

	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';j++);
	
	if(i==j)
	{
		for(k=0;k<i;k++)
		{
			if(str1[k]!=str2[k])
			{
				flag=0;
				break;
			}
		}
	}
	else
		flag=0;
	if(flag)
		printf("same");
	else
		printf("not same");



getch();
return 0;
}
