#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head,*newnode;

struct Node  *createnewnode(int x)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void insert_at_beg(int x)
{
    struct Node *newnode = createnewnode(x);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    else 
    {
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
    
}
void insert_at_end(int x)
{
    struct Node *temp = head;
    struct Node *newnode=createnewnode(x);
    if(head==NULL)
    {
        head = newnode;
        return;
    }
    else
    {
        while(temp->next!=NULL)
        temp=temp->next;
        
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
    }
}
void insert_at_any_pos(int x)
{
    int pos=x;
    int i=1;
    if(pos<0 || pos>x+1)
    {
        printf("Invalid position");
    }
    else if(pos == 1)
    {
        insert_at_beg(x);
    }
    else
    {
        struct Node *temp=head;
        struct Node *newnode = createnewnode(x);
        while(i < pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode -> prev = temp;
        newnode -> next = temp-> next;
        temp->next->prev=newnode;
    }
}
void delete_at_beg()
{
    struct Node *del;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        del = head;
        head=head->next;
        if(head!=NULL)
        head->prev=NULL;
        free(del);
        printf("Element deleted successfully from beg");
    }
}
void del_at_end()
{
    struct Node *temp = head;
    if(temp==NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(temp!=NULL)
        temp=temp->next;
        
        temp->prev->next=NULL;
        free(temp);
        printf("Element deleted at the end");
    }
}
void delete_at_any_pos(int position)
{
    int i;
    struct Node *cur;

    cur = head;
    for(i=0;i<position && cur!=NULL;i++)
    {
        cur=cur->next;
    }

    
    if(cur != NULL)
    {
        cur->prev->next = cur->next;
        cur->next->prev = cur->prev;

        free(cur); // Delete the n node

        printf("SUCCESSFULLY DELETED NODE FROM %d POSITION.\n", position);
    }
    else
    {
        printf("Invalid position!\n");
    }
}

void displayList()
{
    struct Node *temp=head;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print the data of current node
            temp = temp->next;                // Move to next node
        }
    }
}
int main()
{
    printf(" \n Press: ");
    printf(" \n '1' add an element to the beginning of a linked list. ");
    printf(" \n '2' add an element to the end of a linked list. ");
    printf(" \n '3' add an element at a specified position of a linked list. ");
    printf(" \n '4' delete an element from the beginning of a linked list. ");
    printf(" \n '5' delete an element from the end of a linked list. ");
    printf(" \n '6' delete an element at a specified position of a linked list. ");
    printf(" \n '7' display all the elements of a linked list. ");
    printf(" \n '8' exit from program. \n ");

    int opt;
    head=NULL;
    int x,pos,res;

    while(1)
    {
        printf(" \n Enter your option: \n ");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1: printf("\n  ENTER THE VALUE : ");
					scanf("%d",&x);
					newnode = createnewnode(x);                             
					if(newnode==NULL)
					{
						printf("\n UNABLE TO CREATE NODE !!");
					}
					else
					{
						insert_at_beg(x);                          
					}
                    break;

            case 2: printf("\n  ENTER THE VALUE : ");
					scanf("%d",&x);
					newnode=createnewnode(x);                                
					if(newnode==NULL)
					{
						printf("\n UNABLE TO CREATE NODE!!");
					}
					else
					{
						insert_at_end(x);                                      
					}
                    break;

            case 3:
					printf("\n  ENTER THE POSITION YOU WANT TO INSERT THE ELEMENT : ");
					scanf("%d",&pos);
					printf("\n  ENTER THE VALUE : ");
					scanf("%d",&x);
					newnode=createnewnode(x);                                  
					if(newnode==NULL)
					{
						printf("\n UNABLE TO CREATE NODE!!");
					}
					else
					{
						 insert_at_any_pos(pos);                     
					}
                    break;

            case 4: delete_at_beg();
                    break;

            case 5: del_at_end();
                    break;

            case 6: printf("\n  ENTER THE POSITION THAT YOU WANT TO DELETE THE ELEMENT : ");
					scanf("%d",&pos);
					delete_at_any_pos(pos);                               
                    break;

            case 7: displayList(head);
                    break;

            case 8: printf(" PROGRAM TERMINATES!!! \n ");
                    exit(0);

           default: printf(" INVALID - INPUT!!! \n ");
        }
    }

    return 0;
}
