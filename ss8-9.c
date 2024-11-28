#include <stdio.h>
int main() {
	
	int arr[]={1,5,3,2,3,4,1,2,1};
	int maxCount, maxItem;
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
			maxItem=arr[i];
		}
	}
	printf("phan tu %d xuat hien nhieu nhat %d lan", maxItem, maxCount);
	
	return 0;
}