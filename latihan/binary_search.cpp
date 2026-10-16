#include <bits/stdc++.h>
using namespace std;

int binary_search(int target, int arr[], int start, int end){
	//* An algorithm for searching element that only work if data is sorted
	//! If item found, return index of the item, else return -1
	if(start > end) return -1;
	int mid = (start + end) / 2;
	if(target == arr[mid]){
		//! if target found in mid index, return mid index
		return mid;
	}else if(target < arr[mid]){
		//! wipe the right side
		return binary_search(target, arr, start, mid-1);
	}else{
		//! wipe the left side
		return binary_search(target, arr, mid+1, end);
	}
}

int main(){
	int A[] = {5, 9, 11, 17, 19, 33, 44, 57, 69};	
	cout << binary_search(70, A, 0, sizeof(A)/sizeof(int));
	return 0;
}