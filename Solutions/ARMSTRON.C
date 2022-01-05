/* wap  to enter any number and check it is amtrong number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d=0;
	clrscr();
	printf("Enter digit no:");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		c=a%10;
		d=d+c*c*c;
		a=a/10;
	}
	if(d==b)
	{
		printf("Number is armstrong");
	}
	else
	{
		printf("Number is not armstrong");
	}
	getch();
}

