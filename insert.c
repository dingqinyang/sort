#include"insert.h"
#include<stdio.h>

void Insert_Sort(int *arr,int length){
	int index,sortIndex;
	for(index=1;index<length;index++){
		int tmp = arr[index];
		sortIndex = index-1;
		for(;sortIndex>=0&&arr[sortIndex]>tmp;sortIndex--){
			arr[sortIndex+1]=arr[sortIndex];
		}
		arr[sortIndex+1]=tmp;
	}
}


