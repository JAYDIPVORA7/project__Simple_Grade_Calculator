#include <stdio.h>

main()
{
	int marks;
	
	printf("Enter your Marks =");
	scanf("%d",&marks);
	
	(marks<=100 && marks>=90)? printf("your grade is A")
	:(marks<=89 && marks>=75)? printf("your grade is B")
	:(marks<=74 && marks>=65)? printf("your grade is C")
	:(marks<=64 && marks>=45)? printf("your grade is D")
	:(marks<=44 && marks>=35)? printf("your grade is E")
	:(marks<=34 && marks>=0)? printf("your grade is F")
	:printf("Please try again next time");	
}