#include <stdio.h>
int main(){
	
	int i, input, count=0;
	int num[]={1,2,3,4,5};
	printf("nhap vao 1 so ngau nhien ");
	scanf("%d", &input);
	for(i = 0; i <= 4; i++){
		if(input == num[i]){
			count++;
			break;
		}
	}
	if(count==1){
		printf("vi tri  phan tu trong mang la %d",i+1);
	}else{
	printf("khong co phan tu trong mang");
	}
	
	return 0;
}