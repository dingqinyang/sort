#include<stdio.h>
#include"quick.h"


int divide_quick(int *arr,int left,int right){
	int i,j,pivot,tmp;
	i = left;
	pivot = arr[right];
	for(j=left;j<right;j++){
		if(arr[j]<pivot){
			tmp = arr[j];
			arr[j]=arr[i];
			arr[i]=tmp;
			i++;
		}

	}
	arr[right]=arr[i];
	arr[i]=pivot;
	return i;
}


void Quick_Sort(int *arr,int left,int right){
	int center;
	if(left<right){
		center = divide_quick(arr,left,right);
		Quick_Sort(arr,left,center-1);
		Quick_Sort(arr,center+1,right);
	}
}

