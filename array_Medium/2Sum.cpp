#include<bits/stdc++.h>
using namespace std;


void check(int arr[], int n)
{
    int key=19;
    map<int,int>mpp;
 bool check=true;
    for(int i=0;i<n;i++)
    {
        int value =arr[i];
        int extra=key-value;
        if(mpp.find(extra)!=mpp.end())
        {
            cout<<i<<" "<<mpp[extra]<<endl;
            check=false;
        }
        else
        {
            mpp[value]=i;
        }
        

    }
    if (check)
    {
        cout<<"Sorry";
    }
    
    
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    check(arr,n);



    return 0;
}
