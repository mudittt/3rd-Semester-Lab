#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *insertAtFront(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
struct node *deleteAtEnd(struct node *head)
{
    struct node *p1 = head;
    struct node *p2 = NULL;
    while (p1->next != NULL)
    {
        p2 = p1;
        p1 = p1->next;
    }
    p2->next = NULL;
    free(p1);
    p1 = NULL;
    return head;
}
int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    head->prev = NULL;
    second->data = 9;
    second->next = third;
    second->prev = head;
    third->data = 6;
    third->next = NULL;
    third->prev = second;
    printf("\nOriginal: ");
    linkedListTraversal(head);
    printf("Deletion : ");
    head = deleteAtEnd(head);
    linkedListTraversal(head);
    printf("Insertion : ");
    head = insertAtFront(head, 2);
    linkedListTraversal(head);
    return 0;
}