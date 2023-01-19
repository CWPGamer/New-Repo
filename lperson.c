#include <stdio.h>

void swap (int numArr[], int pos1, int pos2);

int main ()
{
	int array[] = {5, 21, 6, 76, 15};
	
	for (int i = 0; i < 5; i++){
		printf("%d\n", array[i]);
	}
	printf("\n");
	swap(array, 2, 4);
}

void swap (int numArr[], int pos1, int pos2)
{
	int temp = numArr[pos1];
	numArr[pos1] = numArr[pos2];
	numArr[pos2] = temp;
	
	for (int i = 0; i < 5; i++){
		printf("%d\n", numArr[i]);
	}
}