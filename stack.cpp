#include<iostream>
using namespace std;
class stack{
    public:
        int top,arr[10];
    public:
    stack(){
        top=-1;
    }
    void push(){
        int ele;
        if(top==sizeof(arr)/sizeof(int) - 1){
            cout<<"Stack is full!! can't insert elements";
        }
        else{
        cout<<"Enter element:";
        cin>>ele;
        top++;
        arr[top]=ele;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is empty! Can't perform Pop operation!";
        }
            top--;
    }
    void display(){
        int temp=top;
        while(temp!=-1){
            cout<<arr[temp]<<endl;
            temp--;
        }
    }

};
int main(){
    stack s;
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