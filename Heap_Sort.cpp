#include<bits/stdc++.h>
using namespace std;

void print_heap(vector<int>A,int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Max_Heapify(vector<int>&A,int i,int n){
    int l = 2*i+1;
    int r = 2*i+2;
    int largest = i;
    if(l<n && A[l]>A[largest])largest = l;
    else largest = i;
    if(r<n && A[r]>A[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(A[i],A[largest]);
        Max_Heapify(A,largest,n);
    }
    return;
}

void Bulid_Max_Heap(vector<int>&A,int n){
    for(int i = (n/2)-1;i>=0;i--){
        Max_Heapify(A,i,n);
    }
    return;
}

void Heap_Sort(vector<int>&A,int n){
    Bulid_Max_Heap(A,n);
    
    // for(int i = (n/2)-1;i>=0;i--){
    //     Max_Heapify(A,i,n);
    // }
    for(int i=n-1;i>0;i--){
        swap(A[0],A[i]);
        Max_Heapify(A,0,i);
    }
    //print_heap(A,n);
    return;
}

int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<endl;
    vector<int>arr;
    cout<<"Enter elements upto "<<n<<" : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<endl;
    print_heap(arr,n);
    Heap_Sort(arr,n);
    cout<<"Sorted Array : ";
    print_heap(arr,n);
    return 0;
}

