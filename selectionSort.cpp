#include<iostream>
using namespace std;

// here we repeatedly find min element in sorted array & place it at begining until our array is sorted
// it is an unstable sorting algorithm
// insertionsort is a stable sorting algorithm 
// time complexity = O(n^2)
// space compexity = O(1)
// bestcase time Complexity = O(n) 

void selection_sort1(int arr[] , int size)
{

for(int i = 0 ; i < size-1 ; i++ )
 { 
     int min_indx = i ;  
    
     for(int j = i+1 ; j < size ; j++)
     {
       if(arr[min_indx] > arr[j])
           {
                 min_indx=j;
       
           }
            
    }
        if(min_indx != i) swap(arr[i],arr[min_indx]);
   }


}

// void selection_sort(int arr[] , int size)
// {
// for(int i = 0 ; i < size-1 ; i++ )
// { 
//     int k = size-1-i;
//     int min_indx = i ; 
//     int max_indx = k; 
//     bool flag = false;
//     for(int j = i+1 ; j < size ; j++)
//     {
//         if(arr[min_indx] > arr[j])
//         {
//             min_indx=j;
//             flag = true;
//         }
//         if(arr[max_indx] < arr[k-j+i])
//         {
//             max_indx = (k-j+i);
//             flag = true;
//         }
        
//     }
    
//     if(max_indx != k && max_indx != i)swap(arr[k] , arr[max_indx]);
//     if(min_indx != i) swap(arr[i],arr[min_indx]);
//     if(!flag)break;



// }

// }
int main()
{

int arr[] = {10 , 9 , 8 , 5,6,7,1,2,0};
int size = sizeof(arr)/sizeof(int);
selection_sort1(arr , size);
// selection_sort(arr ,size)
for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
}


    return 0;
}