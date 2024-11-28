#include <stdio.h>
int main() {
    int i, j, sum = 0;
    int num[4][4] = {
	{1,2,3,4},
	{5,6,7,8},
	{4,3,2,1},
	{8,7,6,5}};
    
    printf("cac phan tu tren duong cheo phu cua ma tran la:\n");
    for(i=0,j=3; i<=3,j>=0; i++,j--){
    	printf("%d ", num[i][j]);
    	sum += num[i][j];
	}
	printf("\ntong cac phan tu tren la: %d", sum);
	
	return 0;
}