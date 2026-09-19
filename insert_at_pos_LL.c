#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *newnode, *temp;
    int n, i, pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create linked list
    for(i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

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

    // Enter position
    printf("Enter position: ");
    scanf("%d", &pos);

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);

    // Insert at first position
    if(pos == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;

        for(i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }

    // Display linked list
    printf("Linked List: ");

    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}