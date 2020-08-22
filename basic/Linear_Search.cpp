#include<bits/stdc++.h>
using namespace std;
long binary_search(long array[],long n,long key){
    for(int i=0;i<n;i++)
        if(array[i]==key)
            return i;
    return -1;
}

int main(){
        long n,key;
        cout<<"\nEnter numeber of elements in array: ";
        cin>>n;
        long array[n];
        long* ptr;
        cout<<"\nEnter elements of array: ";
        for(int i=0;i<n;i++)
            cin>>array[i];
        cout<<"\nEnter element to be searched: ";
        cin>>key;
        long pos = binary_search(array,n,key);

        if(pos!=-1)
            cout<<"Element found at "<<pos;
        else
            cout<<"Element not found";
        
        return 0;
}