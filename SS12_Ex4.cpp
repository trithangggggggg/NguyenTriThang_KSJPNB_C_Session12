#include <stdio.h>

int findMaxvalue(int list[], int size) {
	int max = list[0];
	for(int i = 0; i < size; i++) {
		if (list[i] > max) {
			max = list[i];
		}
	}
	return max;
}
int main () 
{
	int number[] = {2,5,3,22,9};
	int size = sizeof(number)/sizeof(size);
	printf("Phan tu lon nhat trong mang la: %d\n", findMaxvalue(number, size));
	
	return 0;
}
