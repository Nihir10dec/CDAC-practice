#include <stdio.h>
#include<stdlib.h>
const int roint = 6;

struct saving_acc {
		int aid;
		char name[20];
		float balance;
	} s1,s2;
int acc_id()
{
	static int x=1000;
	return x++;
}

int roi(struct saving_acc *s1)
{
	float interest;

	interest = s1->balance*roint/100;
	//printf("%f" , s1->balance);
	s1->balance += interest;
	//printf("%f" , s1->balance);
	printf("aid = %d  interest = %f\n" ,s1->aid, interest);
}
void display(struct saving_acc s1)
{
	printf("%d %s %f\n" , s1.aid , s1.name , s1.balance);
}
int main()
{	
	s1.aid = acc_id();
	s2.aid = acc_id();

	printf("enter details of acc of s1\n");
	scanf("%s %f" , s1.name , &s1.balance);
	printf("enter details of acc of s2\n");
	scanf("%s %f" , s2.name , &s2.balance);
	
	roi(&s1);
	roi(&s2);

	display(s1);
	display(s2);

	getch();
	return 0;
}