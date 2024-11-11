#include <iostream>
using namespace std;


void bubble_sort(int arr[] , int size)
{
// we repetedly swap two adjecent element if they are in wrong order 

// time complexity O(n^2)
// space complexity O(1)
for(int i = 0 ; i < size-1 ; i++)
{  
    bool flag = false ;
    for(int j = 0 ; j < size-i-1 ; j++)
    {
        if(arr[j] > arr[j+1])
        {
           swap(arr[j] , arr[j+1]);
         flag = true;
        }
    }
    if(!flag) break;
}

}

int main()
{

int arr[]= {1,25 ,10 ,2, 76,12 ,11 , 15};
int size = sizeof(arr) /sizeof(int) ;

bubble_sort(arr , size);

for(int i = 0; i < size  ; i++)
{
    cout << arr[i] <<" ";
}


    return 0;
}