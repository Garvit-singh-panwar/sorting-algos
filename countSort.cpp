#include<iostream>
#include<vector>
using namespace std;

// time complexity = O(n+max)
//  space complexity= O(n+max)

void count_sort(int arr[] , int size )
{
    int max = arr[0];
    // finding biggest element;
    for(int i = 1 ; i < size ; i++)
    {

            if(max < arr[i])
            {
                max = arr[i];
            }

    }
    
    // declaring arr of size max+1 which is biggest value in our array where all elements is 0
    int counte[max+1 ] = {0};

    // increment the coute of array indx which is  our original element in array
    for(int i = 0 ; i < size ; i++)
    {

        counte[(arr[i])]++;

    }
    

    //  we makeing counte[i] = counte[i]+counte[i+1] 
    for(int i = 1 ; i < max+1 ; i++)
    {
        counte[i] += counte[i-1];
    }

// declaring an array  = our original array
    int output[size] ={0};
    
//  putting value in our output array at  indx ( indx = value of counte of indx (indx = value at our original array at last position ) ) - 1 
// value = value at our original array at ith indx ;


    for(int i = size-1 ; i >= 0 ; i--)
    {
        output[--counte[arr[i]]] = arr[i];
    }

// putting value on original array at ith  indx ;
// value = value in our output array at ith indx  
    for(int i = 0 ; i < size ; i++){
        arr[i] = output[i];
    }
}

int main()
{

int arr[] ={1,4,6,1,2,0,2,3,1,0,1,1};
int size = sizeof(arr)/sizeof(arr[0]);
count_sort(arr,size);
for(int i = 0 ; i < size; i++)
{
    cout << arr[i] << " ";
}
    return 0;
}