#include<stdio.h>
#include"shell.h"

void insert_shell(int *arr,int interval,int index){
	int tmp = arr[index];
	int i;
	for(i=index-interval;i>=0&&tmp<arr[i];i-=interval){
		arr[i+interval] = arr[i];
	}
	arr[i+interval]=tmp;
}
void Shell_Sort(int *arr,int length){
	int interval;
	int index;
	for(interval=length/2;interval>0;interval/=2){
		for(index=interval;index<length;index++){
			insert_shell(arr,interval,index);
		}
	}
}


