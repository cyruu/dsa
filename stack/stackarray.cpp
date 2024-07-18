#include <iostream>
using namespace std;

// create a struct
struct Stack{
    int *arr;
    int top;
    int size;
};

// isEmpty operation
int isEmpty(struct Stack* s){
    if(s->top==-1){
        cout<<"Stack is empty"<<endl;
        return 1;
    }
    return 0;
}
// isFull operation
int isFull(struct Stack* s){
    if(s->top==s->size){
        cout<<"Stack is full"<<endl;
        return 1;
    }
    return 0;
}
void push(struct Stack* s,int n){
    if(isFull(s)){
        cout<<"Stack is full cant push"<<endl;
        return;
    }
    s->top++;
    s->arr[s->top]=n;
    cout<<n<<" is added to top of stack"<<endl;
}

//pop 
void pop(struct Stack* s){
    if(isEmpty(s)){
        cout<<"Stack is empty can't pop"<<endl;
        return;
    }
    int temp = s->arr[s->top];
    s->top--;
    cout<<temp<<" is pop of stack"<<endl;
}
// display stack
void display(struct Stack* s){
    cout<<"Elements in stack are: "<<endl;
    if(isEmpty(s)){
        return;
    }
    for(int i=0;i<=s->top;i++){
        cout<<s->arr[i]<<" ";
    }
    cout<<endl;
};
// peek operation
int peek(struct Stack *s , int i){
    int pos = s->top-i+1;
    return s->arr[pos];
}
int main(){
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 40;
    s->top=-1;
    s->arr = (int*)malloc(s->size*sizeof(int));
    cout<<"Array created with size :"<<s->size<<endl;
    // push element 
    push(s,10);
    push(s,20);
    push(s,30);
    display(s);
    //pop
    pop(s);
    display(s);
    int p = peek(s,1);
    cout<<"peek at position "<<1<< " is : "<<p;

    return 0;
}