#include <stdio.h>
int main(){
	int a[100], n, c, i, j, search;
	printf("How many number to enter?: ");
	scanf("%d", &n);
	printf("\nEnter %d number: \n\n", n);
	for(c = 0; c < n; c++){
		scanf("%d", &a[c]);
	}
	// Bubble sort start
	for(i = 0; i < n; i++){
		for(j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("\nSorted array is: \n\n");
	for(i = 0; i < n; i++){
		printf("%d \n", a[i]);
	}
	printf("\n%d is smallest number  and %d is largest number .", a[0], a[n-1]);
	return 0;
}
