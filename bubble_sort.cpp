#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		int flag=0;
		for(int j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
				flag=flag+1;
			}
		}
		if(flag==0){
			break;
		}
	}
	cout<<"Your sorted array is : "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Please enter your size of array";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	bubble_sort(arr,n);
	return 0;
}
