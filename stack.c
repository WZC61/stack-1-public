#include<stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdbool.h>

#include "stack.h"


//typedef enum { false, true } bool;

struct stack *init_stack(struct stack *t)
{
 init_list( &t->sll );
 
 return t;
}

struct stack *create_stack()
{
 struct stack *t;

 t = (struct stack *)malloc(sizeof(struct stack));

 return init_stack(t);
}

void uninit_stack( struct stack *t )
{
    free_list( &t->sll );
}
struct stack *push(struct stack *t, T e)
{
 t=add_head(&t->sll,e);
 return t;
}
T pop(struct stack *t)
{    struct node *b;
 b=get(&t->sll,0);
 return b->data;
 t=remove_head(&t->sll);
 
 
}
bool is_empty(struct stack *t)
{
  if(&t->sll==NULL){
        printf("栈是空的\n");
        return 1;
    }else{
        printf("栈不是空栈\n");
        return 0;
}
}

T top(struct stack *t)
{    struct node *b;
 b=get(&t->sll,0);
 return b->data;
}
