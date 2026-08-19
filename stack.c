#include <stdio.h>
#include <stdlib.h>
int capacity;
int *stack;
int tos;
void pop(){
    if(tos==-1){
        printf("UNDERFLOW");
        return;
    }
    tos--;
}
int is_full();
void push(int ele){
    if(is_full())
        printf("OVERFLOW");
    tos++;
    stack[tos]=ele;
}
void create(int max){
    tos=-1;
    capacity=max;
    stack=malloc(sizeof(*stack)*capacity);
}
int peek(){
    return stack[tos];
}
int is_full(){
    if(tos==capacity-1) return 1;
    else return 0;
}
int main(){
    int x,max;
    printf("Capacity: ");
    scanf("%d",&max);
    create(max);
    printf("Keep entering elements, send EOF to stop.\n");
    while(scanf("%d",&x)==1)
        push(x);
    while(tos!=-1){
        printf("%d\n",peek());
        pop();
    }
}
