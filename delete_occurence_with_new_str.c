#include<stdio.h>
int main()
{
	int i,j=0,k=0,flag=1;
	char str[5] ,str2[5];
	char c;
	printf("enter word \n");
	gets(str);
	printf("enter char \n");
	scanf("%c", &c);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
			j++;
		else
		{
			str2[k]=str[i];
			k++;
		}
	}
	str2[k]='\0';
	printf("occurence = %d \n" , j);
	printf("new string = %s" , str2);

getch();
return 0;
}
