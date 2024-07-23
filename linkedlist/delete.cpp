#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

void traversal(struct node *ptr){
    while(ptr!=NULL){
        cout<<"Element is : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

struct node* deleteFirstNode(struct node* head){
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct node* deleteNodeIndex(struct node* head,int pos){
    struct node *temp1 = head;
    struct node *temp2 = head->next;
    int i = 0;
    while(i!=pos-1){
        temp1= temp1->next;
        temp2= temp2->next;
        i++;
    }
    temp1->next = temp2->next;
    free(temp2);
    return head;

}
// delete last node
struct node* deleteLastNode(struct node* head){
    struct node *temp1 = head; 
    struct node *temp2 = head->next; 
    while(temp2->next != NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    temp1->next = NULL;
    free(temp2);
    return head;
}
// delete with particular value
struct node* deleteWithValue(struct node* head,int value){
    struct node *temp1 = head;
    struct node *temp2 = head->next;
    if(head->data == value){
        head = deleteFirstNode(head);
        return head;
    } 
    while(temp2->data != value){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    free(temp2);
    return head;
}
int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *forth = (struct node*)malloc(sizeof(struct node));
    struct node *fifth = (struct node*)malloc(sizeof(struct node));
    struct node *sixth = (struct node*)malloc(sizeof(struct node));
    struct node *seventh = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = forth;
    forth->data = 40;
    forth->next = fifth;
    fifth->data = 50;
    fifth->next = sixth;
    sixth->data = 60;
    sixth->next = seventh;
    seventh->data = 70;
    seventh->next = NULL;

    cout<<"Initial linkedlist: "<<endl;
    traversal(head);
    cout<<"Deleting first node:"<<endl;
    head = deleteFirstNode(head);
    traversal(head);
    cout<<"Deleting 2nd index node:"<<endl;
    head = deleteNodeIndex(head,2);
    traversal(head);
    cout<<"Deleting last node:"<<endl;
    head = deleteLastNode(head);
    traversal(head);
    cout<<"Deleting node with value 50:"<<endl;
    head = deleteWithValue(head,50);
    traversal(head);
    return 0;
}