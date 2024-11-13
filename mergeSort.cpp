#include<iostream>
using namespace std;


void merge(int arr[] , int L , int mid , int R)
{
 
//  defining Size of 2 sub array
int an = mid - L+1 ; 
int bn = R - mid;

// declaring 2 sub array ;
int *a = new int[an];
int *b = new int[bn];

//  putting value in both Sub array 
for(int i = 0 ; i < an ; i++)
{
    a[i] = arr[L+i];
}
for(int i = 0 ; i < bn ; i++)
{
    b[i] = arr[mid + 1 + i];
}

// comparing and putting value in array (Sorting that array)

int i = 0;
int j = 0;
int k = L;

while( i < an && j < bn )
{
    if(a[i] < b[j])
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    else
    {
        arr[k] = b[j];
        j++;
        k++;
    }


}

while(i < an)
{
    arr[k] = a[i];
    i++;
    k++;
}
while( j < bn)
{
    arr[k] = b[j];
    j++;
    k++;
}

delete(a);
delete(b);
return ;


}
void merge_sort(int arr[] , int L , int R){
    int mid = (L+R)/2;

    if(L >= R)return ;

    merge_sort(arr , L , mid);
    merge_sort(arr , mid+1 , R);
    merge(arr , L , mid , R );




    return ;
}


int main()
{
int arr[] = {3,2,15,16,6,10,9};
int size = 7;
int L = 0;
int R = size - 1;
merge_sort( arr , L , R );
for(int i = 0 ; i < size ; i++)
{
  cout <<   arr[i] << " " ;
}
cout << endl;

    return 0;
}