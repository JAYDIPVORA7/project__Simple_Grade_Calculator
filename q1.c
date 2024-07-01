#include <stdio.h>

main()
{
	int marks;
	
	printf("Enter you Marks =");
	scanf("%d",&marks);
	
	switch(marks)
	{
		case 90 ... 100:
			printf("The Grade is A. Excellent Work.");
			break;
		case 75 ... 89:
			printf("The Grade is B. Well Done.");
			break;
		case 65 ... 74:
			printf("The Grade is C. Good Job.");
			break;
		case 45 ... 64:
			printf("The Grade is D. You are passed,but you could do better.");
			break;
		case 35 ... 44:
			printf("The Grade is E. You are passed, but you need hard work.");
			break;
		case 0 ... 34:
			printf("The Grade is F. Sorry,you are failed.");
			break;
		default:
			printf("please enter proper marks");
			break;
	}
	
}