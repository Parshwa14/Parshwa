#include <stdio.h>

void main()
{
	int rollno,s1,s2,s3,tot;
	char name[20];
	float per;
	
	printf("\nEnter Your Name :");
	scanf("%s",&name);
	
	printf("Enter Your Roll No. :");
	scanf("%d",&rollno);
	
	printf("Enter Physics Marks :");
	scanf("%d",&s1);
	
	printf("Enter Chemistry Marks :");
	scanf("%d",&s2);
	
	printf("Enter Maths Marks :");
	scanf("%d",&s3);

	tot = s1+s2+s3;
	per = (float)tot/3;
	
	printf("\nRoll No. : %d",rollno);
	printf("\nName : %s",name);
	printf("\nTotal Marks : %d",tot);
	printf("\nPercentage : %.2f",per);

	
	if(per>=75)
	{
		printf("\nDistinction");
	}
	else if(per>=60)
	{
		printf("\nFirst Class");
	}
	else if(per>=50)
	{
		printf("\nSecond Class");
	}
	else if(per>=40)
	{
		printf("\nPass class");
	}
	else
	{
		printf("\nWASTED!!!");
	}
}