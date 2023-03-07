#include<stdio.h>
void* my_memcpy(void* dest,const void*src,int num){
	void* ret=dest;
	char* dest_ = (char*) dest;     char* src_ = (char*) src;
	while(num--){
		*dest_=*src_;
		dest_++;
		src_++;
	}
	return ret;
}

int main(){
	int arr1[] = {1,2,3,4,5};
	int arr2[10] = {0};
	my_memcpy(arr2,arr1,sizeof(arr1));
	for(int i=0;i<5;i++){
		printf("%d",arr1[i]);	
	}
	return 0;
}
