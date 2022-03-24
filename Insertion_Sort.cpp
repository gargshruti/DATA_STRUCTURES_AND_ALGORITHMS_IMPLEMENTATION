#include <bits/stdc++.h>

using namespace std;

vector<int> insertion_sort(vector<int>arr,int n){
    int key=0,i=0,j=0;
    for(j=1;j<n;j++){
        key = arr[j];
        i = j-1;
        while( i>-1 && arr[i]>=key){
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }
    return arr;
}


int main()
{
    cout<<"Enter length of array : ";
    int n;
    cin>>n;
    cout<<endl<<"Enter array elements : ";
    vector<int>arr,ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    ans = insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
