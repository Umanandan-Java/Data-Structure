#include<iostream>
using namespace std;
struct node{
    int info;
    node *next;
};
class queue{
    public:
    node *rear,*front,*temp;
    public:
    queue(){
        front=rear=NULL;
    }
    void push(){
        int ele;
        node *n = new node();
        cout<<"Enter element:";
        cin>>ele;
        n->info=ele;
        n->next=NULL;
        if(rear==NULL){
            front = rear = n;
        }
        else{
            rear->next=n;
            rear=n;
        }
    }
    void pop(){
        if(rear==NULL){
            cout<<"Queue is empty";
        }
        else{
            temp = front;
            front=front->next;
            delete temp;
        }
    }
    void display(){
        if(front==NULL){
            cout<<"Queue is empty!!"<<endl;
        }
        else{
            temp = front;
            while(temp!=NULL){
                cout<<temp->info<<" ";
                temp=temp->next;
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
