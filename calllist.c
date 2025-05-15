#include<stdio.h>

struct info
{
	char name[100];
	long int number;
};

int main()
{
	int n, top = -1;
	struct info stack[100];

	printf("Enter the number of people:");
	  scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
	    printf("Enter name of person %d: ", i + 1);
		scanf(" %s", stack[++top].name);
	 	printf("Enter phone number of person %d:",i + 1);
		scanf("%ld", &stack[top].number);
	}

	for(int i = 0; i < n; i++)
	{
		printf("\nDetails of person %d:\n", i + 1);
		printf("Name: %s\n", stack[top - i].name);
		printf("Phone number: %ld\n", stack[top - i].number);
	}

	return 0;
}
