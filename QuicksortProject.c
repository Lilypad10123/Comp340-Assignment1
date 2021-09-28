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
	printf("\n");
}
void swap_elements(IntArray *array, int element1, int element2) {
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

	for(i=0; i<5; i++) {
		printf("%i ", temp[i]);
	}
	printf("\n");
}

void quick_sort(IntArray *array, int lo, int hi) {
	int temp[5];
	int i;
	for(i=0; i<5; i++) {
		temp[i] = (*array).thisArray;
		array++;
	}
	int pivot_element = temp[0];
	//printf("%i\n", pivot_element);

	int left = lo; //indices [lo...left-1] elements less than pivot
	int right = hi; //indices [right+1...hi] greater than pivot
	int j = lo + 1; //indices [left... i-1] equal to pivot element
	// indices [i...right] elements not yet compared against pivot

	//loop until index i increments past index right
	//{
		//case 1: i less than pivot, swap i and left
			//increment i and left
		//case 2: i greater than pivot, swap i and right
			//decrement right
		//case 3: i equal to pivot
			//increment i
	//}
	//recurse and sort elements smaller than pivot
	//recurse and sort elements larger than pivot

}




int main() {
	IntArray intArray[] = {30, 20, 50, 10, 40};

	printArray(intArray);


	//run quicksort()

	swap_elements(intArray,0,1);
	//quick_sort(intArray,1,1);

	return (EXIT_SUCCESS);
}
