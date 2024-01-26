#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 100000

struct Stack {
   int items[MAX_LEN];
   int top;
};

void initStack(struct Stack* stack) {
   stack -> top = -1;
}

void push(struct Stack* stack, int value) {
   stack -> items[++stack -> top] = value;
}

int pop(struct Stack* stack) {
   return stack->items[stack->top--];
}

int isEmpty(struct Stack* stack) {
   return stack->top == -1;
}

int main() {
	
   char sequence[MAX_LEN + 1];
   struct Stack stack;
   initStack(&stack);

   while (scanf("%s", sequence) != EOF) {
   	
      int index = 1;
      initStack(&stack);

		int i;
      for(i = 0; sequence[i] != '\0'; i++) {
         
			if (sequence[i] == '(') {
            push(&stack, index++);
         }
			else if (sequence[i] == ')') {
            printf("%d %d\n", pop(&stack), index++);
         }
      }
   }

   return 0;
}
