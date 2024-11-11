#include<iostream>
using namespace std;
// in insertion sort we repeatedly take element from unsorted subarray & insert it in sorted subarray until it become sorted

// if i have fully unsorted array then my 1st element comes in sorted sub array and the rest comes in unsorted subarray 

// timeComplexity of insertionSort = O(n^2)
// spaceComplexity of insertionSort = O(1)
// bestCase TimeComplexity = omega(n)

void insertion_sort(int arr[] , int size)
{

for(int i = 1 ; i < size ; i++)
{
    int current_ele = arr[i];
    int j =i-1 ;
    while(j >= 0 && current_ele < arr[j])
    {
        arr[j+1]=arr[j] ;
        j--; 
    }
    arr[j+1] = current_ele; 
}

}

int main()
{

int arr[] = {2,4,1,0,45,23,22,3,5};
int size = sizeof(arr)/sizeof(arr[0]);

insertion_sort(arr , size);
int i = 0;
while (i < size)
{
    cout <<  arr[i]<<" " ;
    i++;
}



    return 0;
}