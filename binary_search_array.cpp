#include<iostream>
using namespace std;
int main()
{
    int l=0,h=10,key,mid;
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter key";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(A[mid]==key)
        {
            cout<<"found at "<<mid;
            return 0;
        }
        else if(key<A[mid]) h=mid-1;
        else l=mid+1;
    }
    cout<<"not found!";
    return 0;
}
