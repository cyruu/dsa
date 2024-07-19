#include <iostream>
using namespace std;

struct Queue {
    int front;
    int rear;
    int *arr;
    int size;
};
//isFull
int isFull(struct Queue *q){
    if(q->rear==(q->size-1)){
        return 1;
    }
    return 0;
}
// isEmpty
int isEmpty(struct Queue *q){
    if(q->front==-1 && q->rear==-1){
        return 1;
    }
    return 0;
}
//dispaly
void display(struct Queue *q){
    if(isEmpty(q)){
        cout<<"Queue is empty cant display"<<endl;
        return; 
    }
    cout<<"Elements in queue are:"<<endl;
    for(int i=q->front;i<=q->rear;i++)
    {
        cout<<q->arr[i]<<" ";
    }
    cout<<endl;
}
//shiftelemets
void shiftelements(struct Queue *q){
    for(int i=q->front;i<=q->rear;i++){
        q->arr[i]=q->arr[i+1];
    }
}
//enqueue
void enqueue(struct Queue *q, int n){
    //enqueue from rear end
    if(isFull(q)){
        cout<<"Queue is full. can't enqueue"<<endl;
        return;
    }
    // front is always 0th index
    q->front=0;
    q->rear++;
    q->arr[q->rear] = n;
    cout<<n<<" is added to the queue"<<endl;
    display(q);
}
//dequeue
void dequeue(struct Queue *q){
    if(isEmpty(q)){
        cout<<"cant dequeue. queue is empty"<<endl;
        return;
    }
    // dequeue form front end
    int temp = q->arr[0];
    // then shift elemets on step forward
    shiftelements(q);
    // decrease rear by 1 as queue has 1 spot empty
    q->rear--;

    cout<<temp<<" dequeued from queue."<<endl;
    if(q->rear == -1){
        q->front = -1;
    }
    display(q);

}

int main(){
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front=-1;
    q->rear=-1;
    q->size = 5;
    q->arr = (int*)malloc(q->size*sizeof(int));
    //enqueue
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,50);
    enqueue(q,60);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    enqueue(q,60);
 

    return 0;
}