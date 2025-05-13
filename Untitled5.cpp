#include <stdio.h>
int main()
{
	int marks;
	char grade;
	printf("your marks is enter:");
	scanf("%d", &marks);

	(marks >= 90) ? (printf("your grade is A\n", grade = 'A'))
				  : ((marks >= 80) ? (printf("your grade is B\n", grade = 'B'))
								   : ((marks >= 70) ? (printf("your grade is C\n", grade = 'C'))
													: ((marks >= 60) ? (printf("your grade is D\n", grade = 'D'))
																	 : ((marks >= 50) ? (printf("your are fail!!!!\n",'fail'))
																					  : (printf("you are fail!!!!!!!!"))))));

	switch (grade)
	{
	case 'A':
	{
		printf("\"Exellent Work\"!");
		break;
	}
	case 'B':
	{
		printf("\"Well done\".");
		break;
	}
	case 'C':
	{
		printf("\"Good job\".");
		break;
	}
	case 'D':
	{
		printf("\"you passed, but you can do better\".");
		break;
	}
	case 'fail':
	{
		printf("\"sorry, you are fail\".");
		break;
	}
	default:
	{
		printf("\"Invalid input\".");
		break;
	}
	}
	if (marks >= 50)
	{
		printf("Congratulations! you are eligible for the next level");
	}
	else
	{
		printf("please try again nexte time");
	}
}