// Given an integer array arr , move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// 
// Note that you must do this in - place without making a copy of the array

//  input =  0,5,0,3,42
// output =  5,3,42,0,0

#include<iostream>
using namespace std;
// Space Complexity O(1) 
// time Complexity O(n^2)

void ShiftZeroIN_End(int arr[] , int size)
{

for(int i = size ; i >= 0 ; i--)
{   int j = 0;
    bool flag = false;
    while(j!=i)
    {
        if(arr[j] == 0 && arr[j+1] != 0)
        {
            swap(arr[j] , arr[j+1]);
            flag = true;
        }
        j++;
    }
    if(!flag)break;
}

}

int main()
{
    int arr[] = {3,0,2,0,1,5 };
    int size = sizeof(arr)/sizeof(arr[0]);

    ShiftZeroIN_End(arr , size);
    for(int i = 0 ; i < size ; i++)
    {
        cout <<arr[i] << " " ; 

    }



    return 0;
}