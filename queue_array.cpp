#include<iostream>
using namespace std;
class queue{
    public:
    int rear,front,a[10];
    public:
    queue(){
        front=rear=-1;
    }
    void push(){
        int ele;
        if(rear==sizeof(a)/sizeof(int)-1){
            cout<<"Queue is full!!!";
        }
        else if(front ==-1 ) {
            front=rear=0;
            cout<<"Enter element:";
            cin>>ele;
            a[rear]=ele;
        }
        else{
            rear++;
            cout<<"Enter element:";
            cin>>ele;
            a[rear]=ele;
        }
    }
    void pop(){
        if(rear==-1){
            cout<<"Queue is empty";
        }
        else{
            front++;
        }
    }
    void display(){
        if(rear==-1){
            cout<<"Queue is empty!!";
        }
        else{
            int temp = front;
            while(temp<=rear){
                cout<<a[temp]<<" ";
                temp++;
            }
            cout<<'\n';
        }
    }
};
int main(){
    queue s;
    char proceed='y';
    int choice;
    while(proceed=='y'||proceed=='Y'){
        cout<<"1.Push \n";
        cout<<"2.Pop \n";
        cout<<"3.Display \n";
        cout<<"4.Exit \n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
            s.push();
            break;
            case 2:
            s.pop();
            break;
            case 3:
            s.display();
            break;
            case 4:
            proceed = 'n';
            break;
            default:
            cout<<"Invalid Input!!\n";
            break;
        }
        
    }
}
