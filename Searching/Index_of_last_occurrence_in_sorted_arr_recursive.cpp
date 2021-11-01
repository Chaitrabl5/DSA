#include<iostream>

// 0(logn)
// 0(logn)

using namespace std;


int lastOcc(int *a, int n, int low, int high, int key){
	if(low>high) return -1;
	
	int mid = low + (high-low)/2;
	
	if(key>a[mid]) return lastOcc(a, n, mid+1, high, key);
	
	else if(key<a[mid]) return lastOcc(a, n, low, mid-1, key);
	
	else{
		if(mid==n-1 || a[mid+1]!=a[mid]) return mid;
		
		else return lastOcc(a, n, mid+1, high, key);
	}
}



int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int key;
	cin>>key;
	
	cout<<lastOcc(a, n, 0, n-1, key);

	return 0;
}