#include <stdio.h>
int main() {
    int i, j, sum = 0;
    int num[4][4] = {
	{1,2,3,4},
	{5,6,7,8},
	{4,3,2,1},
	{8,7,6,5}};
    
    printf("cac phan tu tren duong cheo chinh cua ma tran la:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
           if(i==j){
           	printf("%d ", num[i][j]);
           	sum += num[i][j];
		   }
        }
    }
	printf("\ntong cua cac phan tu nay la: %d", sum);
	return 0;
}