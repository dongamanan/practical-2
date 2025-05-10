#include<stdio.h>
int main()
{
	int score;
	printf("enter your score:");
	scanf("%d",&score);
	
	if(score>=90){
	    printf("your grade is A");
	}
	else if(score>=80)
	{
		printf("your grade is B");
	}
	else if(score>=70)
	{
		printf("your grade is C");
	}
	else if(score>=60)
	{
		printf("your grade is D");
	}
	else if(score>=50)
	{
		printf("your grade is E");
	}
	else if(score<=40)
	{
		printf("you are FAIL!!!!");
	}
	
}
/*
input=92;
output=your grade is A;



*/