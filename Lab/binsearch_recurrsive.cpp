//Binary search Recurssive
//Binary search iter
#include <iostream>
using namespace std;
int binsearch(int arr[],int high,int low,int element){
	int middle;
	
	while(high>=low){
		middle = (high+low/2);
		if(arr[middle] == element){
			return middle;
		}
		if(arr[middle]<element){
			
			return binsearch(arr,high,mid+1,element);
		}
		else{
			return binsearch(arr,mid-1,low,element);
		}

		
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6};
	int element = 2;
	int low = 0;
	int high = sizeof(arr)/sizeof(arr[0])
	int x= binsearch(arr,high-1,low,element);
	if(x==-1){
		cout<<"Element not found";
	}
	else{
		cout<<"Element found at element"<< x;
	}
	return 0;
	
	
}
