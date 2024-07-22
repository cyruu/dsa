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
struct node* insertAtEnd(struct node* head,int n){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    // temp pointer to get to the node one step before the end
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->data = n;
    newNode->next = NULL;
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
    cout<<"After adding at end"<<endl;
    head = insertAtEnd(head,99);
    traversal(head);
    cout<<"After adding at end"<<endl;
    head = insertAtEnd(head,109);
    traversal(head);
    return 0;
}