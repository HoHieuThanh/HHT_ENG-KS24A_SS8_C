#include <stdio.h>
int main(){
	int num[2][3] = {
	{1,2,3,},
	{4,5,6,},
	};
	printf("gia tri cua mang tu cuoi ve dau la:\n");
	for(int i = 1; i>=0; i--){
		for(int j = 2; j>=0; j--){
			printf("num[%d][%d] = %d\n", i, j, num[i][j]);
		}
	}
	return 0;
}