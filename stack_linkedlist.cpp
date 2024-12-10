#include<iostream>
using namespace std;
struct node{
    int info;
    node *prev;
};
class stack_linkedlist{
    public: 
        node *top, *temp;
    public:
    stack_linkedlist(){
        top=NULL;
    }
    void push(){
        int ele;
        node *n = new node();
        cout<<"Enter element:";
        cin>>ele;
        n->info=ele;
        n->prev=NULL;
        if(top==NULL){
            top=n;
        }
        else{
            n->prev=top;
            top=n;
        }
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack is empty!!\n";
        }
        else{
            temp=top;
            top=top->prev;
            delete temp; 
        }
    }
    void display(){
        temp = top;
        if(top==NULL){
            cout<<"Stack is empty\n";
        }
        
        else{
            while(temp!=NULL){
                cout<<temp->info<<" ";
                temp=temp->prev;
            }
            cout<<'\n';
        }
    }
    };
    int main(){
        stack_linkedlist s;
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
        
   
