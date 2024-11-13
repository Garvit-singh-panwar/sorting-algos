#include <iostream>
 
using namespace std;

int strcmp(string first , string second)
{
  int size_f = first.length();
  int size_s = second.length();

int i = 0;
while(i < size_f && i < size_s)
{

if(first[i] > second[i])
{
 return 1;

}
if(first[i] < second[i]){
    return -1;
}

i++;
}

if( size_f > size_s )
{
    return 1;
}
if(size_f < size_s)
{
    return -1;
}

return 0;
}

void sortString( char str[][20] , int size) 
{

for(int i = 0 ; i < size ; i++)
{
    int min_indx = i ;
    int j = i+1;
    while( j < size )
    {
        if(strcmp(str[min_indx],str[j]) > 0 )
        {
                min_indx = j;
        }
        j++;
    }
    
    if(min_indx != i)
    {
        swap(str[i] , str[min_indx]);
    }
}

}

int main()
{

char fruit[][20]={"papaya" , "banana","watermelon" , "apple" , "mango" , "kiwi"};

int size = sizeof(fruit) / sizeof(fruit[0]);

sortString(fruit, size);
for(int i = 0 ; i < size ; i++)
{
    cout << fruit[i] << " ";
}
    return 0;
}