#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert(int newdata)//inseert node function
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode ->data = newdata;
    newnode->next = head;
    head = newnode;
}

void display()//display function
{
    struct node *p;
    p = head;
    while(p!=NULL){
        cout<<p->data;
        p = p->next;
    }
}
int main()
{
    insert(2);
    insert(4);
    insert(5);
    cout<<"The linked list is:"<<endl;
    display();
    return 0;
}
