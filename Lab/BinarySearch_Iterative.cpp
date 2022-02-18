//Binary search iter
#include <iostream>
using namespace std;
int binsearch(int arr[],int size,int element){
	int middle;
	int low= 0;
	int high = size-1;
	
	while(high>=low){
		middle = (high+low/2);
		if(arr[middle] == element){
			return middle;
		}
		else if(arr[middle]<element){
			
			low=middle+1;
		}
		else{
			high=middle-1;
		}

		
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6};
	int x= binsearch(arr,6,3);
	if(x==-1){
		cout<<"Element not found";
	}
	else{
		cout<<"Element found at element"<< x;
	}
	return 0;
	
	
}
