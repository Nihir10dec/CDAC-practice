#include<stdio.h>
int main()
{
	int i,j=0,k=0,l;
	char str[5] ,str2[5];
	char c;
	printf("enter word \n");
	gets(str);
	printf("enter char \n");
	scanf("%c", &c);
	for(l=0;str[l]!='\0';l++);
	for(i=0;i <l;i++)
	{
		if(str[i]==c)
		{
			for(k=i;k<l-1;k++)
			{
				str[k]=str[k+1];
			}
			i--;
			l--;			
		}
	}
	str[i]='\0';
	printf("occurence = %d \n" , j);
	printf("new string = %s" , str);

getch();
return 0;
}
