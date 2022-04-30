#include<stdio.h>
#include <malloc.h>
#include <assert.h>
#include <stdbool.h>

#include "stack.h"

//typedef enum { false, true } bool;

struct stack *init_stack(struct stack *t)
{
 t->count = 0;

 return t;
}

struct stack *create_stack()
{
 struct stack *t;

 t = (struct stack *)malloc(sizeof(struct stack));

 return init_stack(t);
}
struct stack*push(struct stack*t,T e){
    if(t->count >=MAX_ELE){
        printf("栈是满的\n");
        return NULL;
    }else{
        
        t->store[t->count] = e;
     t->count++;
        return t;
    }
}
bool is_empty(struct stack*t){
    if(t->count == 0){
        printf("栈是空的\n");
        return 1;
    }else{
        printf("栈不是空栈\n");
        return 0;

    }
}
T pop(struct stack*t){
    T a;
    int loc;
 assert(t->count > 0);

 loc = t->count - 1;

 a = t->store[loc];

 t->count--;

 return a;

}
T top( struct stack *t )
{
 int loc;

 assert(t->count > 0);

 loc = t->count - 1;

 return t->store[loc];
}

