#include <stdio.h>

void floydsTriangle(int);

int main() {
	
	int rows;
	
	printf("Enter no of rows to print Floyd's Triangle: ");
	scanf("%d", &rows);
	
	floydsTriangle(rows);
	
	return 0;
}

void floydsTriangle(int rows) {
	int a = 1, b = 0;
	int i, j;
	
	for(i=1; i<=rows; i++) {
		for(j=1; j<=i; j++) {
			if((i+j) % 2 == 0)
				printf("%d", a);
			else
				printf("%d", b);
		}
		printf("\n");
	}
}
