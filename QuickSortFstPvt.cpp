#include<iostream>
using namespace std;

//  here we use divide and concer method 
//  where we divide our problem in smaller sub problems and then solve all smaller sub problems 

// here best time complexity is omega(n*log^n)
// worst time complexity is O(n^2)
// space complexity is O(n)


int pivot_pos(int arr[] , int L , int R , int pivot)
{
int i = pivot+1;
int j = R;

while(i <= j)
{
    while(arr[i] < arr[pivot])
    {
        i++;
    }
    while(arr[j] > arr[pivot])
    {
        j--;
    }
    if(i < j)
    {
         swap(arr[i] , arr[j]);
    }
   
}

swap(arr[j] , arr[pivot]);

    return j;
}

void QuickSort(int arr[] , int L , int R)
{
    int pivot = L;
    if(L >= R) return;
    pivot = pivot_pos(arr, L , R , pivot);
    QuickSort( arr , L , pivot-1 ) ;
    QuickSort(arr , pivot+1 , R);
    return;
}

int main()
{

int arr[] = {18,12, 16 ,30 , 35 ,20} ;
int size = 6;
int L = 0;
int R = size - 1;
QuickSort(arr , L , R);
for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " " ;
}


    return 0;
}