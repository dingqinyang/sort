#include"select.h"
#include"insert.h"
#include"bubble.h"
#include"shell.h"
#include"quick.h"
#include<stdio.h>
void (*sort)(int *arr,int length);
void (*sort_2)(int *arr,int left,int right);
int test_arr[10]={4,2,3,9,1,5,8,7,0,6};
void display_arr(int *arr,int length){
	int i;
	if(arr==NULL||length<=0){
		printf("array or length invaild\n");
	}
	printf("array: ");
	for(i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");	
}	

int main(){

	sort_2 =Quick_Sort;
	sort_2(test_arr,0,9);
	display_arr(test_arr,10);	


	return 0;
}
