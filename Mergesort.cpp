#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int l, int r, int mid){
    vector<int> temp;
    int i = l;
    int j=mid+1;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
            i++;
    }
    while(j<=r){
        temp.push_back(arr[j]);
            j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+l]=temp[idx];
    }
}
void mergesort(vector<int> &arr,int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,r,mid);
    }
}
int main(){
    vector<int> arr={3,2,9,5,3,1};
    mergesort(arr,0,arr.size()-1);
    
    return 0;
}
