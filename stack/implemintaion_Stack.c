#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Stack {
    int top;
    unsigned capacity;
    int *array;
};
struct Stack *newSTack (unsigned cp)
{
    struct Stack *new = (struct Stack *)malloc(sizeof(struct Stack));
    new->capacity = cp;
    new->top = -1; 
    new->array = (int *)malloc (sizeof(int) * new->capacity);
    return new;
}
int isempty (struct Stack* stack)
{
    return (stack->top == -1 );
}

int isfull (struct Stack* stack)
{
    return (stack->top == stack->capacity - 1);
}
void     psuh(struct Stack *new, int item)
{
    if (isfull(new))
        return ;
    new->array[++new->top] = item;
    printf("%d pushed SUCCSESS to stack" , item);
}