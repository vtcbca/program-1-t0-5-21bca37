/* wap to enter any number & print it in revrse*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum=0;
	a=5,sum=0;
	clrscr();
	while(a>=1)
	{
		sum=sum-a;
		printf("\n %d",a);
		a=a-1;
	}
	getch();
}