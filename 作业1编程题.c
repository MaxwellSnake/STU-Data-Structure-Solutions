#include <stdio.h>

int find(int [], int);
int binary_search(int [], int, int);

int main(int argc, char *argv[]) {
	//元素的位置对应其在数组中的下标
	//find测试
	int a[10] = {12,23,56,7865,5723,234,235};
	printf("%d\n",find(a, 234));	
	//binary_search测试
	int b[10] = {1,3,5,7,9,12,14,16,18};
	printf("%d\n",binary_search(b,10,14));
	
	return 0;
}


//二分查找
int binary_search(int array[],int n,int value)  {  
	int low=0;  
	int high=n;  
	
	while (low<high){   
		int middle=low + ((high-low)>>1);  //防止溢出，移位也更高效. 
  
		if (array[middle]>value)  {  
			high =middle; 
		}   
		else if(array[middle]<value)  {  
			low=middle+1;  
		}  
		else  
			return middle;
	}  
	return -1;  
}


//顺序查找
int find(int array[], int value){
	int i = 0;
	while(array[i] != '\0'){
		if(array[i] == value){
			return i;
		}
		i++;
	}
	return -1;
}


