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
    traversal(head);
    return 0;
}