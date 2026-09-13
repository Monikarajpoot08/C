// Program to implement a linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *newNode, *temp;
    int value;

    printf("Enter elements (-1 to stop):\n");
    scanf("%d", &value);

    while (value != -1)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
        printf("enter next element:  \n");
        scanf("%d", &value);
    }

    // Display linked list
    printf("Linked List: ");

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}