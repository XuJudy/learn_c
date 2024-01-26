// 实现逆波兰运算

#include <stdbool.h>
#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void){

    top = 0;
}

bool is_empty(void){

    return top == 0;
}

bool is_full(void){

    return top == STACK_SIZE;
}

void push(int i){

    if (is_full()){

        stack_overflow();
    }
    else{
        
        contents[top++] = i;
    }
}

int pop(void){

    if (is_empty()){
        stack_underflow();
        return 0;
    }
    else{
        return contents[--top];
    }
}

void stack_overflow(void){

    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){

    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

int main(){

    char ch;
    int op1, op2;

    for (;;) {

        printf("Enter an RPN expression: ");

        for (;;) {

            scanf(" %c", &ch);
            if (ch == '=') {

                printf("Value of expression: %d\n", pop());
                break;
            } 
            else if (ch >= '0' && ch <= '9') {
                push(ch - '0');
            }
            else if (ch=='+' || ch=='-' || ch=='*' || ch=='/') {

                op2 = pop();
                op1 = pop();

                switch (ch) {
                    case '+': push(op1 + op2); break;
                    case '-': push(op1 - op2); break;
                    case '*': push(op1 * op2); break;
                    case '/':
                        if (op2 == 0) {
                            printf("Division by zero\n");
                            make_empty();
                            break;
                        }
                        else {
                            push(op1 / op2);
                            break;
                        }
                }
            }
            else if (ch==' ') {
                continue;
            }
            else if (ch=='\n' || ch=='=') {
                break;
            }
            else {
                printf("Invalid expression\n");
                make_empty();
                break;
            }
        }

        if (ch!='=') {
            break;
        }
    }

    return 0;
}