#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *newnode, *temp;

// Function to create a new node
struct node* create_node()
{
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    return newnode;
}

// Function to insert node at beginning
void insert_at_begin()
{
    newnode = create_node();

    newnode->next = head;
    head = newnode;
}

void insert_at_end(){
    newnode=create_node();
    temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

// Function to display linked list
void display()
{
    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create the initial linked list
    for(i = 0; i < n; i++)
    {
        newnode = create_node();

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }
    printf("\nEnter data for node to insert at beginning:\n");
    insert_at_begin();
    // Display the list
    printf("\nLinked List:\n");
    display();
    printf("\nEnter data for node to insert at end:\n");
    insert_at_end();
    
    printf("\nLinked List:\n");
    display();


    return 0;
}















