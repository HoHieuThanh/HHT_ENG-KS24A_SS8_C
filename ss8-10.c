#include <stdio.h>
int main() {
	
	int arr[]={1,3,5,3,2,3,4,1,2,1,2};
	int result[100]={0};
	int maxCount, maxItem;
	int index=0;
	int lengthArr=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<lengthArr; i++){
		int count=0;
		for(int j=0; j<lengthArr; j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>maxCount){
			maxCount=count;
		}
	}
	
	for(int i=0; i<lengthArr; i++){
		int count=0;
		for(int j=0; j<lengthArr; j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count==maxCount){
			int flag=-1;
			for(int k=0; k<100; k++){
				if(arr[i]==result[k]){
					flag=1;
					break;
				}
			}
			if(flag==-1){
				result[index]=arr[i];
				index++;
			}
			flag=-1;
		}
	}
	for(int i=0; i<index; i++){
		printf("phan tu xuat hien nhieu nhat: %d \n", result[i]);
	}
	
	return 0;
}