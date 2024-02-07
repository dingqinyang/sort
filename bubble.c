#include<stdio.h>
#include"bubble.h"

void Bubble_Sort(int *arr,int length){
	int index,index2;
	int flag = 1;
	for(index=0;index<length;index++){
		//compare length-1 
		for(index2=0;index2<length-index-1;index2++){
			if(arr[index2+1]<arr[index2]){
				flag = 0;
				int tmp = arr[index2];
				arr[index2] = arr[index2+1];
				arr[index2+1] = tmp;
			}

		}
		if(flag){
			break;
		}
	}
}
