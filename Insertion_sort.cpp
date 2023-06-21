#include<bits/stdc++.h>
using namespace std;
// best case o(n) and worst and avg case is o(n^2)
void Insertion_sort(int arr[], int n){
	for(int i=1; i<n; i++){
		int temp=arr[i];
		int j=i-1;
		while(j>0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	cout<<"your sorted array is: "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Please enter your size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	Insertion_sort(arr,n);
	return 0;
}
