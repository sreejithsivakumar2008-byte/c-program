/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int octal_number;
	printf("Enter an octal number: ");
	scanf("%o", &octal_number);
	printf("The octal number in integer format is: %d\n", octal_number);

	return 0;
}