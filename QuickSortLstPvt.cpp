#include<iostream>
using namespace std;

//  here we use divide and concer method 
//  where we divide our problem in smaller sub problems and then solve all smaller sub problems 

// here best time complexity is omega(n*log^n)
// worst time complexity is O(n^2)
// space complexity is O(n)


int pivot_pos(int arr[] , int L ,int R , int pivot){
 int i = -1;
 int j = 0;

 while(j < pivot)
 {
    if(arr[j] < arr[pivot])
    {
        i++;
        if(i != j)
        {
            swap( arr[i] , arr[j]);
        }
    }
    j++;
 } 
 i++;
 swap(arr[i] , arr[pivot]);
 pivot = i;

    return pivot;
}

void QuickSort(int arr[] , int L , int R)
{

int pivot = R;
if(L >= R ) return;

pivot = pivot_pos(arr , L , R , pivot );
QuickSort(arr , L , pivot-1);
QuickSort(arr , pivot+1 ,  R);

}


int main()
{

int arr[] = {18,12,16,20,35,30}; 
int l = 0;
int r = sizeof(arr)/sizeof(arr[0]);

QuickSort(arr,l ,r-1);
for(int i = 0 ; i < r ; i++ )
{
    cout << arr[i] << " ";
}

    return 0;
}