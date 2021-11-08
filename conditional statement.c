#include<stdio.h>
int main()
{
	int n;
	printf("ENTER YOUR MARKS");
	scanf("%d",&n);
	if(n<=100&&n>=85)
	printf("grade A");
	else if(n<=84&&n>=70)
	printf("grade B");
	else if(n<=69&&n>=55)
	printf("grade C");
	else if(n<=54&&n>=40)
	printf("grade D");
	else if(n<=100&&n>=85)
	printf("grade F");
	
	return 0;
}
