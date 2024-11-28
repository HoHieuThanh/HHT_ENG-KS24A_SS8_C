#include <stdio.h>
int main(){
	
	int i;
	printf("nhap vao kich thuoc cua mang: ");
	scanf("%d",&i);
	int x=i, y=i;
	int array[x][y];
	for(x=0; x<i; x++){
		for(y=0; y<i; y++){
			printf("nhap vao phan tu tai hang %d cot %d: ", x+1, y+1);
			scanf("%d", &array[x][y]);
		}
	}
	for(x=0; x<i; x++){
		for(y=0; y<i; y++){
			printf("%d\t", array[x][y]);
		}
		printf("\n");
	}
	
	return 0;
}