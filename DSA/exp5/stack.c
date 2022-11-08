#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
void linkedListTraversal(struct stack *ptr)
{
    while (ptr != NULL)
    {
        printf("\n%d ", ptr->data);
        ptr = ptr->next;
    }
}
int isFull(struct stack *top)
{
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct stack *push(struct stack *top, int x)
{
    if (isFull(top))
    {
        printf("\nstack overflow!\n");
    }
    else
    {
        struct stack *p = (struct stack *)malloc(sizeof(struct stack));
        p->data = x;
        p->next = top;
        top = p;
        return top;
    }
}
int pop(struct stack **n)
{
    if (isEmpty(*n))
    {
        printf("\nstack underflow!\n");
        return 1111111;
    }
    else
    {
        struct stack *p = *n;
        (*n) = (*n)->next;
        int x = p->data;
        free(*n);
        return x;
    }
}
int main()
{
    struct stack *top = NULL;
    printf("Mudit\n");
    top = push(top, 325);
    linkedListTraversal(top);
    printf("\nremoved the element : %d", pop(&top));
    linkedListTraversal(top);
    top = push(top, 34);
    top = push(top, 364);
    top = push(top, 67);
    linkedListTraversal(top);
    free(top);
    return 0;
}