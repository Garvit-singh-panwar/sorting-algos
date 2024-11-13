
// given two sorted array , write a program to merge them in a sorted manner

#include<iostream>
using namespace std;
void merge(int arr1[] , int arr2[] ,int arr3[],int size1 , int size2  )
{

int i = 0 ;
int j = 0 ;
int k = 0 ;

while(i < size1 && j < size2)
{
    if(arr1[i] < arr2[j])
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    else{
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

while( i < size1)
{
    arr3[k] = arr1[i];
    i++;
    k++;
}

while(j < size2)
{
    arr3[k] = arr2[j];
    j++;
    k++;
}

}

int main()
{
    int arr1[] = {5,8,10};
    int arr2[] = {2,7,8};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[(size1+size2)] = {0};
    merge(arr1,arr2,arr3,size1,size2);
    for(int i = 0 ;i < size1+size2 ; i++)
    {
        cout << arr3[i] << " ";
    }


    return 0;
}