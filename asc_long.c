#include<stdio.h>

int main (){

	char num[11]="1234512346";
	int max=0,t=0, i , j;
	for ( i = 0; num[i]!='\0'; i++)
	{
		t = num[i] - '0';
		printf("%d\n", t);
		for (j=i; j < 10; j++)
		{			
			if(num[j]>num[j+1])				
			break;

			else{
			t = t*10 + (num[j+1]-'0');			
			}
			//i=j+1;
		}
		if(t>max)
		max = t;
	}
	printf("%d", max);

	getch();
return 0;
}