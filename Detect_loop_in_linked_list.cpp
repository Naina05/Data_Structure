#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

void push(node** head, int new_data)
{
    node* new_node = new node();
    new_node->data  = new_data;
    new_node->next  = (*head);
    (*head) = new_node;
}
void makeCycle(node* &head,int pos)
{
    node* temp=head;
    node* startNode;

    int count = 1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
bool detectCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }

    }
    return false;

}
void removeCycle(node* &head){
    node* fast=head;
    node* slow=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;   
    } while (slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
void printList(node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
int main()
{
    /* Start with the empty list */
    node* head = NULL;
 
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    makeCycle(head,3);
    /* Create a loop for testing */
    head->next->next->next->next = head;
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    printList(head);
    return 0;
}
