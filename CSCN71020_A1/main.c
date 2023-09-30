#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract(); //add subtract

int main() {      //changed to int

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1d", &inputNum);           //changed to %d for integer

	switch (inputNum)
	{
	case 1:
		add();
		break;
		          //added break statement 

	case 2:
		subtract();         //use the subtract function for option 2
		break;              //added break statement

	}

	return 0;            //to indicate an execution
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 - num2;    //calculates and performs subtraction
	printf("%lf - %lf = %lf\n", num1, num2, result);
}