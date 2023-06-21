//Reverse using stack
// Stack implementation using array
#include <stdio.h>
#include <stdlib.h>
typedef struct stack      //Stack structure(Data type)
{
  int *ar;    
  int top;
  int size;
} stack;
stack *create_Stack(int cap)      //Stack creation
{
  stack *ptr = (stack *)malloc(sizeof(stack));
  if (!ptr)      //checks if memory is allocated in heap or not
    return NULL;
  ptr->size = cap;
  ptr->top = -1;
  ptr->ar = (int *)malloc(sizeof(ptr->size * sizeof(int)));
  if (!ptr->ar)   //checks if array is created or not
    return NULL;
  return ptr;
}
void push(stack *st, int num) //to push element or data in stack
{
  if (st->top == st->size - 1) //checks if stack is full or not
  {
    printf("OVER FLOW");
    return;
  } 
  else 
  {
    st->ar[++st->top] = num;
    return;
  }
}
int pop(stack *st)    //to get element by popping
{
  if (st->top == -1)    //checks if stack is empty or  not
  {
    printf("Empty Stack");
    return -1;
  } 
  else 
  {
    return (st->ar[st->top--]);
  }
}
int peek(stack *st)   //tells top most element in stack
{
  if (st->top == -1) 
  {
    printf("Empty Stack");
    return -1;
  } 
  else
    return st->ar[st->top];
}  
int isEmpty(stack *st)   //tells if stack is empty or not
{
  if (st->top == -1)
    return 1;
  else
    return 0;
}
int isFull(stack *st)  //tells if stack is full or not
{
  if (st->top == st->size - 1)
    return 1;
  else
    return 0;
}
int sizeOfstack(stack *st)  //tells current size of stack
{ 
	return st->top + 1; 
}
int main() 
{
  int n, num, i;
  printf("Enter size of array: ");
  scanf("%d", &n);
  stack *st = create_Stack(n);    //Calling stack creation function
  printf("Enter Elements of array ");
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &num);         //Pushing stack elements
    push(st, num);
  }
  for (i = 0; i < n; i++)
  {
    printf("%d ", pop(st));     //Printing by popping stak elements
  }
  free(st);      //Free dynamic memory alloted to stack
  return 0;
}