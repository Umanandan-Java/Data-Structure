#include<iostream>
using namespace std;
    void bubbleSort(int a[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                }
            }
        }
    }
    void selectionSort(int a[],int n){
        for(int i=0;i<n-1;i++){
            int SI=i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[SI]){
                    SI =j;
                }
            }
            swap(a[i],a[SI]);
            
        }
    }
    void insertionSort(int a[],int n){
        for(int i=1;i<n;i++){
            int curr = a[i];
            int prev = i-1;
            while(prev>=0 && a[prev]>curr){
                a[prev+1]=a[prev];
                prev--;
            }
            a[prev+1]=curr;
        }
    }
int main(){
    int a[]={4,1,5,3,2};
    int n = 5;
    // bubbleSort(a,n);
    // selectionSort(a,n);
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
