#include <stdlib.h>
#include <stdio.h>

typedef struct arrayOne {
	int thisArray;
} IntArray;

void printArray(IntArray *array) {
	printf("%i ", array->thisArray);
	printf("\n");
}

void quick_sort(int lo, int hi) {
	//return from smallest case of one element subproblem

	//choose the first element of the subproblem array section

	int left = lo; //indices [lo...left-1] elements less than pivot
	int right = hi; //indices [right+1...hi] greater than pivot
	int i = lo + 1; //indices [left... i-1] equal to pivot element
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
	return 0;
}
