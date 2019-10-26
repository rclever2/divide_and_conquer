//============================================================================
// Name        : Divide.cpp
// Author      : 
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int binary_search(int item, int arr[], int l, int r) // @suppress("No return")
{

	if (l>r)
	{
		return -1; //could not find
	}

	int mid = (r+l)/2; // compute mid of array

	if (arr[mid] == item) //if the midpoint equals the search term, return mid
	{
		return mid;
	}
	else if (arr[mid] > item) //item would be left of mid
	{
		return binary_search(item,arr,l,mid-1);
	}
	else if (arr[mid] < item) //item would be right of mid
	{
		return binary_search(item,arr,mid+1,r);
	}

}

int main() {
	int arr[] = {1,14,37,43,68,74,95,106,149,185};
	int search;
	cin >> search;
	cout << binary_search(search, arr, 0, (sizeof(arr)/sizeof(arr[0]))-1);

}
