#include <stdio.h>
int main(){
	int c, first, last, middle, n, search, array[100], t, i, j;
	printf("How many number to enter?: ");
	scanf("%d", &n);
	printf("\nEnter %d number: \n\n", n);
	for(c = 0; c < n; c++){
		scanf("%d", &array[c]);
	}
	// Bubble sort start
	for(i = 0; i < n; i++){
		for(j = 0; j < n - i - 1; j++){
			if(array[j] > array[j + 1]){
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
	printf("\nSorted array is: \n\n");
	for(i = 0; i < n; i++){
		printf("%d \n", array[i]);
	}
	printf("\nEnter number to be search: ");
	scanf("%d", &search);
	// Binary search begins
	first = 0;
	last = n - 1;
	while(first <= last){
		middle = (first + last) / 2;
		if(array[middle] < search){
			first = middle + 1;
		}else if(array[middle] == search){
			printf("\n%d found at location %d.\n", search, middle + 1);
			break;
		}else{
			last = middle - 1;
		}
	}
	if(first > last){
		printf("\nNot found!! %d is not present in the list.\n", search);
	}
	// Find element largest and smallest
	int maxValue = array[0];
	int minValue = array[0];
	printf("\nFind element largest and smallest:\n\n");
	for(i = 0; i < n; i++){
		if(array[i] > maxValue){
			maxValue = array[i];
		}
	}
	printf("%d is element largest.\n", maxValue);
	for(i = 0; i < n; i++){
		if(array[i] < minValue){
			minValue = array[i];
		}
	}
	printf("%d is element smallest.\n", minValue);
	return 0;
}
