#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define MAX_SIZE 100

static unsigned int stack[MAX_SIZE];
static int top = -1;

void stack_init() {
    top = -1;
}

int stack_push(unsigned int data) {
    if (stack_is_full()) {
        return -1;
    }
    stack[++top] = data;
    return 0;
}

int stack_pop() {
    if (stack_is_empty()) {
        return -1;
    }
    return stack[top--];
}

unsigned int stack_size() {
    return top + 1;
}

int stack_is_full() {
    return top == MAX_SIZE - 1;
}

int stack_is_empty() {
    return top == -1;
}