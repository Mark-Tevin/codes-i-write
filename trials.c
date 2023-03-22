#include <stdio.h>
int main ()
{
	int arr [] = { 10, 20, 30, 40, 50, 60};
	//* assigns address of array to ptr*
	int* ptr = arr;
	printf("value of first element is %d", *ptr);
	return 0;
}
