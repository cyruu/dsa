#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};

void traverse(struct ListNode* head){
    struct ListNode *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

struct ListNode* mergeTwoList(struct ListNode *first, struct ListNode *second){
    struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    //first linked list item is smaller
    if(first->val<second->val){

    }
}

int main(){

    // first list
    struct ListNode *list1_head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *list1_second = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *list1_third = (struct ListNode*)malloc(sizeof(struct ListNode));

    // second list
    struct ListNode *list2_head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *list2_second = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *list2_third = (struct ListNode*)malloc(sizeof(struct ListNode));
    // initialization first list
    list1_head->val = 1;
    list1_head->next = list1_second;
    list1_second->val = 4;
    list1_second->next = list1_third;
    list1_third->val = 5;
    list1_third->next = NULL;
    // initialization second list
    list2_head->val = 3;
    list2_head->next = list2_second;
    list2_second->val = 4;
    list2_second->next = list2_third;
    list2_third->val = 8;
    list2_third->next = NULL;
    cout<<"First List: "<<endl;
    traverse(list1_head);
    cout<<endl<<"Second List: "<<endl;
    traverse(list2_head);
    //function call
    struct ListNode *newHead = mergeTwoList(list1_head,list2_head);

    return 0;
}