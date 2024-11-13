// write a program to find Kth smallest element in an array using quick sort 

#include<iostream>
using namespace std;

int find_pivot(int arr[] , int L ,int R )
{

    if(L == R)
    {   
        return L;
    }

    int pivot = L;
    int i = L+1;
    int j = R;

    while(i <=j ){

        while(arr[i] < arr[pivot])
        {
            i++;
        }
        while(arr[j] >arr[pivot])
        {
            j--;
        }

        if(i < j)
        {
            swap(arr[i] , arr[j]);
        }

    }

swap(arr[pivot] , arr[j]);
    return j;





}
int find_Kth_ele(int arr[]  , int i , int j , int k)
{

int pivot = find_pivot(arr ,i , j);
if(pivot == k)
{
    return arr[k];
}

    if( pivot > k )
    {
    
    return find_Kth_ele(arr , i , pivot-1 , k);

    }
    if(pivot < k){ 
     return find_Kth_ele(arr, pivot+1 , j , k) ;
    }


    return arr[pivot];
}



int main()
{
int arr[] = {5,7,6,9,0,1,2,8,3,4};
cout << find_Kth_ele(arr , 0 , 9 , 0) << " ";

    return 0;
}