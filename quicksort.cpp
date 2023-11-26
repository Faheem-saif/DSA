#include <iostream>

using namespace std;

int swap(int arr[],int i, int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	
}
int partition(int arr[],int l,int r){
	int pivot=arr[r];
	int i=l-1;
	for (int j=l;j<r;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,r);
	return i+1;
}
void Quicksort(int arr[],int l,int r){
	if(l<r){
	
	
	int p=partition(arr,l,r);
	Quicksort(arr,l,p-1);
	Quicksort(arr,p+1,r);
}

}

int main(){
int n,arr[n];
cout<<"Enter the size of array"<<endl;
cin>>n;
cout<<"Enter the elements of array"<<endl;
    for(int i=1;i<=n;i++){
    	cin>>arr[i];
    
	}
	cout<<"Before sorted:";
	
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
		
	}cout<<endl;
	Quicksort(arr,1,n);
	cout<<"After sorted:";
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
}