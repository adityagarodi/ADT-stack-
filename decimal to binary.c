#include <stdio.h>
int main() {
	int num, i = 0 ,top = -1,stack[100];
	printf("Enter the number:\n ");
	scanf("%d", &num);
	if (num == 0)
	{
		printf("0");
		return 0;
	}

	while (num > 0) {
		stack[++top] = num % 2;
		num = num / 2;
	}

	printf("Binary number of the given decimal numbers is\n ");
	while (top >= 0) 
	{
		printf("%d", stack[top--]);
	}
	return 0;
}
