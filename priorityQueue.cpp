#include<iostream>
using namespace std;

class prique{
    public:
    int front=-1, rear=-1;
    int a[5][2];
    public:
    void insert(){
        int ele,pri;
        cout<<"Enter element:";
        cin>>ele;
        cout<<"Enter priority:";
        cin>>pri;
        if(front==4){
            cout<<"Queue is full!!";
            return;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        a[rear][0]=ele;
        a[rear][1]=pri;

        for(int i = rear;i>front;i--){
            if(a[i][1]>=a[i-1][1]){
                swap(a[i][0],a[i-1][0]);
                swap(a[i][1],a[i-1][1]);
            }
        }
    }
    void deletequeue(){
        if(front==-1){
            cout<<"Queue is empty";
            return;
        }
        if(front == rear){
            front = rear = -1;
        }
        else{
            front++;
        }
    }
    void display(){
        if(front==-1){
            cout<<"Queue is empty!!";
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<"Element: "<<a[i][0]<<" Priority: "<<a[i][1]<<endl;
        }
    }
};
int main(){
    prique pq;
    int choice;
    do{
        cout<<"1.Insert\n2.display\n3.Delete\n4.Exit\nEnter your choice:";
        cin>>choice;
        switch(choice){
            case 1:pq.insert();break;
            case 2:pq.display();break;
            case 3:pq.deletequeue();break;
            case 4:break;
            default: cout<<"Select the correct option!";
    
        }
    }
    while(choice!=4);
}
