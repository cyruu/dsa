#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

int isEmpty(struct node* front){
    if(front==NULL){
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

void enqueue(struct node **front,struct node **rear, int n){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = n;
    // new node is always last elememt
    newNode->next = NULL;
    cout<<"adding element "<<n<<endl;
    if(isEmpty(*front)){
        *front = *rear = newNode;
        return;
    }
    // there is atleast one element in the queue
    // first rear->next = newNode
    (*rear)->next = newNode;
    // then shift rear node one step forward
    *rear = newNode;
}

void traversal(struct node *front){
    while(front != NULL){
        cout<<"Element is: "<<front->data<<endl;
        front = front->next;
    }
}

void dequeue(struct node **front){
    if(isEmpty(*front)){
        cout<<"cant dequeue. queue is empty"<<endl;
        return;
    }
    struct node *temp = (*front);
    int value = temp->data;
    *front = (*front)->next;
    free(temp);
    cout<<"dequeuing the value "<<value<<endl;
}

int main(){
    struct node *front = NULL;
    struct node *rear = NULL;
    enqueue(&front,&rear,10);
    enqueue(&front,&rear,20);
    enqueue(&front,&rear,30);
    traversal(front);
    dequeue(&front);
    traversal(front);
    dequeue(&front);
    traversal(front);
    dequeue(&front);
    traversal(front);
    dequeue(&front);
    traversal(front);
    return 0;
}