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
struct node* insertAtBegining(struct node* head,int n){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=n;
    newNode->next = head;
    head = newNode;
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
    cout<<"Before adding at begining"<<endl;
    traversal(head);
    cout<<"After adding at begining"<<endl;
    head = insertAtBegining(head,99);
    traversal(head);
    cout<<"After adding at begining"<<endl;
    head = insertAtBegining(head,109);
    traversal(head);
    return 0;
}