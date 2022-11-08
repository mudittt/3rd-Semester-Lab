#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
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
struct node *reverse(struct node *head)
{
    struct node *prevNode = (struct node *)malloc(sizeof(struct node));
    struct node *curNode = (struct node *)malloc(sizeof(struct node));

    prevNode = head;
    head = head->next;
    curNode = head;

    prevNode->next = NULL;

    while (head != NULL)
    {
        head = head->next;
        curNode->next = prevNode;
        prevNode = curNode;
        curNode = head;
    }
    head = prevNode;
    return head;
}

struct node *insertAtindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != (index - 1))
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *deleteATindex(struct node *head, int index)
{
    struct node *p1 = head;
    struct node *p2 = head;
    int i = 0;
    while (i != index - 1)
    {
        p1 = p1->next;
        i++;
    }
    int j = 0;
    while (j != index)
    {
        p2 = p2->next;
        j++;
    }
    p1->next = p2->next;
    free(p2);

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
    second->data = 9;
    second->next = third;
    third->data = 6;
    third->next = NULL;
    printf("\nOriginal: ");
    linkedListTraversal(head);
    printf("Deletion (index : 1) : ");
    head = deleteATindex(head, 1);
    linkedListTraversal(head);
    printf("Insertion (data : 2, index : 1) : ");
    head = insertAtindex(head, 2, 1);
    linkedListTraversal(head);
    printf("Reversal : ");
    head = reverse(head);
    linkedListTraversal(head);
    return 0;
}