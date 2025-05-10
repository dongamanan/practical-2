#include<stdio.h>
int main()
{
	int choice;
	
	printf("enter your score: ");
	scanf("%d",&choice);
	
	
	
	
	printf("your score are 100>=90 press 1\n");
	printf("your score are 90>=80 press 2\n");
	printf("your score are 80>=70 press 3\n");
	printf("your score are 70>=60 press 4\n");
	
	
	
	printf("are you choice!please enter number:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:{
			printf("your grade is A \"Excellent work!\"");
			break;
		}
		case 2:{
			printf("your grade is B \"Well done\".");
			break;
		}
		case 3:{
			printf("your grade is C \"Good job\".");
			break;
		}
		case 4:{
			printf("your grade is D \"you passed,but you could do better\".");
			break;
		}
		
		
		default:{
			printf("your grade is F \"Sorry,you failed\".");
			break;
		}
    }
}


/*
inut=92;
output=your gradeis A "Excellent work!"


*/