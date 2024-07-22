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
struct node* insertAfterNode(struct node* head,struct node* givenNode,int n){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data =n;
    newNode->next = givenNode->next;
    givenNode->next = newNode;
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
    cout<<"After adding after second node:"<<endl;
    head = insertAfterNode(head,second,99);
    traversal(head);
    cout<<"After adding after third node: "<<endl;
    head = insertAfterNode(head,third,199);
    traversal(head);
    return 0;
}