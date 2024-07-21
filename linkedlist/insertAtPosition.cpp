#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
void traversal (struct node* ptr){
    while(ptr!=NULL){
        cout<<"Element is : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
struct node* insertAtPosition(struct node* head,int n,int pos){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    // temp pointer to get to the node one step before the position
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    int i=0;
    while(i!=pos-1){
        temp = temp->next;
        i++;
    }
    newNode->data=n;
    newNode->next = temp->next;
    temp->next= newNode;
    return head;
}
int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    //head
    head->data = 10;
    head->next = second;
    //second node
    second->data = 20;
    second->next = third;
    //third node
    third->data = 30;
    third->next = NULL;
    // traversal
    cout<<"Before adding"<<endl;
    traversal(head);
    cout<<"After adding at position 1"<<endl;
    head = insertAtPosition(head,99,1);
    traversal(head);
    cout<<"After adding at position 2"<<endl;
    head = insertAtPosition(head,109,2);
    traversal(head);
    return 0;
}