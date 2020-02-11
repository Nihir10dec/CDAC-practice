#include<stdio.h>
int main()
{
	int i,j=0,k,flag=1;
	char str[5] ;
	char c;
	printf("enter word : \n");
	gets(str);
	printf("enter char");
	scanf("%c", &c);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
			j++;
	}
	printf("occurence = %d" , j);

getch();
return 0;
}