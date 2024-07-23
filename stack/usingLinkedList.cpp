#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

int isEmpty(struct node* top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}
int isFull(){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(temp==NULL){
        return 1;
    }
    else {
        return 0;
    }
}

struct node *push(struct node *top,int n){
    if(isFull()){
        cout<<"Stack is full. can't add"<<endl;
        return top;
    }
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = n;
    newNode->next = top;
    top = newNode;
    cout<<n<<" is added to stack."<<endl;
    return top;
}
struct node *pop(struct node *top){
    if(isEmpty(top)){
        cout<<"Cant pop stack is empty"<<endl;
        return top;
    }
    int value = top->data;
    struct node *temp = top;
    top = top->next;
    free(temp);
    cout<<value<<" popped from stack"<<endl;
    return top;
}
void traversal(struct node *ptr){
    while(ptr!=NULL){
        cout<<"Element is : "<<ptr->data<<endl;
        ptr = ptr->next;
    }

}
int main(){
    struct node *top = NULL;
    top = push(top,10);
    top = push(top,20);
    top = push(top,30);
    top = push(top,40);
    traversal(top);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    top = push(top,40);
    traversal(top);
    top = pop(top);
    traversal(top);
    return 0;
}