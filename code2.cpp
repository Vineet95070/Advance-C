#include <stdio.h>

int main(){
	
	int i, j;
	int arr[] = {34, 76, 13, 18, 90, 34, 67, 12};
	
	int size = sizeof(arr)/sizeof(int);
	
	for(i=0; i<size; i++){
		
		for(j=i+1; j<size; j++){
			
			if(arr[i] > arr[j]){
				
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i=0; i<size; i++){
		
		printf("%d  ", arr[i]);
	}
	
	return 0;
}
