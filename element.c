#include<stdio.h>

int min(int arr[10]){
	int temp = arr[0];
	for(int i = 0; i< 10; i++)
	{
		if(temp > arr[i]){
			temp = arr[i];
		}
	}
	return temp;
}

int main(){
	int arr[10];
	int val;
	
	for(int i = 0; i<10; i++){
		int z = i+1;
		printf("Enter a number %d: ", z);
		scanf("%d", &val);
		arr[i] = val;
	}
	printf("The minimum number is %d", min(arr));
}


