#include<stdio.h>
#include"select.h"

void Select_Sort(int *arr,int length){
	int index,min,cur;
	for(index = 0;index<length;index++){
		min = index;
		for(cur = index;cur<length;cur++){
			if(arr[cur]<arr[min]){
				min = cur;//find min 
			}
		}
		int tmp = arr[index];//exchange min&index
		arr[index] = arr[min];
		arr[min] = tmp;
	}
}

