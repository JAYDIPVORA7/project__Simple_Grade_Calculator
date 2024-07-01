#include <stdio.h>

main()
{
	int marks;
	
	printf("Enter your Marks =");
	scanf("%d",&marks);
	
	if (marks>=90 && marks<=100)
	{
		printf("The Grade is A. excellent work. you are Eligible for next level.");
	}
	else if (marks>=75 && marks<=85)
	{
		printf("The Grade is B. excellent work. you are Eligible for next level.");
	}
	else if(marks>=65 && marks<=74)
	{
		printf("The Grade is C. excellent work. you are Eligible for next level.");
	}
	else if (marks>=45 && marks<=64)
	{
		printf("The Grade is D. excellent work. you are Eligible for next level.");
	}
	else if (marks>=35 && marks<=44)
	{
		printf("The Grade is E. Sorry, you are not Eligible for next level.");
	}
	else if (marks>=0 && marks<=34)
	{
		printf("The Grade is F.Sorry,you are failed");
	}
	else
	{
		printf("please try again");
	}
}