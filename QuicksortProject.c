//Assignment 1 - unfinished :(
//Julia Wosnack 300114746

#include <stdlib.h>
#include <stdio.h>

typedef struct arrayOne {
	int thisArray;
} IntArray;

void printArray(IntArray *array) {
	int i;
	for(i=0; i<5; i++) {
		printf("%i ", (*array).thisArray);
		array++;
	}
	for(i=0; i<5; i++) {
		array--;
	}
	printf("\n");
}
void  swap_elements(IntArray *array, int element1, int element2) {
	int temp[5];
	int i;
	for(i=0; i<5; i++) {
		temp[i] = (*array).thisArray;
		array++;
	}
	int t;
	t = temp[element1];
	temp[element1] = temp[element2];
	temp[element2] = t;

	for(i=5, i>0; i--) {
		(*array).thisArray = temp[i];
		array--;
	}
}

void quick_sort(IntArray *array, int lo, int hi) {
	int temp[5];
	int i;
	for(i=0; i<5; i++) {
		temp[i] = (*array).thisArray;
		array++;
	}
	int pivot_element = temp[sizeof(temp)/sizeof(int)];

	int left = lo; //indices [lo...left-1] elements less than pivot
	int right = hi; //indices [right+1...hi] greater than pivot
	int j = lo + 1; //indices [left... i-1] equal to pivot element
	int k = hi - j;

	while (j<right) {
		if(j<pivot_element) {
			swap_elements(array, j, left)
			j++;
			left++;
		} else if (j>pivot_element) {
			swap_elements(array, j, right);
			right--;
		} else if (j==pivot_element) {
			j++;
		}

	}
	//recurse and sort elements smaller than pivot
	//recurse and sort elements larger than pivot
}


int main() {
	IntArray intArray[] = {30, 20, 50, 10, 40};

	int lo = 0;
	int hi = 4;
	printArray(intArray);
	quick_sort(intArray, lo, hi);
	printArray(intArray);

	return (EXIT_SUCCESS);
}
