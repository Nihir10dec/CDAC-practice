#include<stdio.h>
int main()
{
	int i,j,k;
	char sent[100]="I am Iron Man";
	char temp;
	for(i=0;sent[i]!='\0';i++);
	for(j=0;j<i/2;j++)
	{
		temp = sent[j];
		sent[j] = sent[i-j-1];
		sent[i-j-1] = temp;
	}
	printf("%s" , sent);

getch();
return 0;
}