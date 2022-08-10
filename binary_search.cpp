#include<iostream>
using namespace std;

template<class T1, class T2,class T3>
int binarySearch(T1 element, T2 size, T3 arr[])
{
    int low=0;
    int high=size-1;
    int mid=(high+low)/2;
    while (low<=high)
    {
        if(arr[mid]==element)
        {
            return mid;
        }
        else if (arr[mid]<element)
        {
            mid=high-1;
        }
        else if (arr[mid]>element)
        {
            mid=high+1;
        }
        else

            return -1;
    }
}

int main()
{
    int arr[]={1,2,9,12,25,63,96,102};
    int size =sizeof(arr)/sizeof(int);
    int element= 25;
    int searchIndex= binarySearch(element,size,arr);
    cout<<"The element "<<element<<" was found at index number "<<searchIndex<<endl;
return 0;
}
