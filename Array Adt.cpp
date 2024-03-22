/*#include<iostream>
using namespace std;
struct  Array {
	int* A;
	int size;
	int length;

};

void display(struct Array arr) {
	int i;
	printf("\nElement are\n");
	for (i = 0;i < arr.length;i++)
		printf("%d", arr.A[i]);

}

int main() {
	struct Array arr;
	int n, i;
	printf("Enter size of Array:");
	scanf_s("%d", &arr.size);
	arr.A = (int*)malloc(arr.size * sizeof(int));
	printf("How many number you want:");
	scanf_s("%d", &n);
	for (i = 0;i < n;i++)
		scanf_s("%d", &arr.A[i]);
	arr.length = n;

	display(arr);



}*/