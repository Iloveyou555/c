#include<stdio.h>
void swap(char* buff1,char*buff2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		int temp;
		temp=*buff1;
		*buff1=*buff2;
		*buff2=temp;
		buff1++;
		buff2++;
	}
}

void my_qsort(void* base,int sz,int width ,int(*cmp)(void* e1,void*e2))
{
		int i=0;
		for(i=0;i<sz;i++)
		{
			for(int j=0;j<sz-i-1;j++)
			{
				if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
				{
				 swap((char*)base+j*width,(char*)base+(j+1)*width,width);
				}
			}
		}
}

int cmp_int(void* e1,void*e2){
	return *(int*)e1-*(int*)e2;
}
void test(){
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int sz = sizeof(arr)/sizeof(arr[0]);
	my_qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for(int i=0;i<sz;i++)
	{
		printf("%d",arr[i]);
		
	}
}	
  struct Stu 
    {
		char name[20] ;
		int age ;
	};
int cmp_stu(  void* e1, void* e2){
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test1(){

	struct Stu s[2] = {{"li",30},{"liu",20}};
	int sz = sizeof(s)/sizeof(s[0]);
	my_qsort(s,sz,sizeof(s[0]),cmp_stu);
	
}

int main(){
	test();
	test1();
	return 0;
} 
