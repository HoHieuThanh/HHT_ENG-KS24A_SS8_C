#include <stdio.h>

int main() {
    int i, j, sum = 0;
    int num[4][4] = {
	{1,2,3,4},
	{5,6,7,8},
	{4,3,2,1},
	{8,7,6,5}};
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
           if(i==0 && j!=3|| j==0 && i!=0 || i==3 && j!=0 || j==3 && i!=3 ){
           	sum += num[i][j];
		   }
        }
    }
    printf("tong cac phan tu tren duong bien cua ma tran la: %d",sum);
    return 0;
}