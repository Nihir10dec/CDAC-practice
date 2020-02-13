#include<stdio.h>

struct students {
	char name[10];
	char div;
	int m1,m2,m3,total;
	float perc;
};

void sort(struct students s[] , int n)
{int i,j;
	struct students t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(s[j].total<s[j+1].total)
			{
				t = s[j+1];
				s[j+1]=s[j];
				s[j]=t;
			}
		}
	}
}

void display(struct students s[] , int n)
{int i;
	for(i=0;i<3;i++)
	{
		printf("%s %c %f %d\n", s[i].name , s[i].div , s[i].perc , s[i].total);
	}
}

int main()
{int i;
	struct students s[3];
	for( i=0;i<3;i++)
	{
		printf("enter details of student\n");
		scanf("%s %c %d %d %d", s[i].name , &s[i].div , &s[i].m1 , &s[i].m2 , &s[i].m3);
		s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
		s[i].perc = s[i].total/3;
	}
	sort(s,3);
	display(s,3);

	getch();
	return 0;
}