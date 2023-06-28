#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct stack 
{
  char *ar;
  int top;
  int size;
} stack;
stack *create_Stack(int cap) {
  stack *ptr = (stack *)malloc(sizeof(stack));
  if (!ptr)
    return NULL;
  ptr->size = cap;
  ptr->top = -1;
  ptr->ar = (char *)malloc(sizeof(ptr->size * sizeof(char)));
  if (!ptr->ar)
    return NULL;
  return ptr;
}
void push(stack *st, char ch) 
{
  if (st->top == st->size - 1) 
  {
    printf("OVER FLOW");
    return;
  } 
  else 
  {
	  st->top=st->top+1;
     st->ar[st->top] = ch;
    return;
  }
}
char pop(stack *st) 
{
  if (st->top == -1) 
  {
    printf("Empty Stack");
    return -1;
  } 
  else 
  {
    return (st->ar[st->top--]);
  }
}
char peek(stack *st) 
{
  if (st->top == -1) 
  {
    printf("Empty Stack");
    return -1;
  } 
  else
    return st->ar[st->top];
}
int isEmpty(stack *st) 
{
  if (st->top == -1)
    return 1;
  else
    return 0;
}
int isFull(stack *st)
{
  if (st->top == st->size - 1)
    return 1;
  else
    return 0;
}
int sizeOfstack(stack *st) 
{ 
	return st->top + 1; 
}
int main()
{
	int pu=0,po=0,i;
	char str[200];
	printf("Enter paraenthesis\n");
	scanf("%[^\n]",str);
	stack *st=create_Stack(strlen(str));
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='['||str[i]=='{'||str[i]=='(')
		{
			push(st,str[i]);
			pu++;
		}
		else if(!isEmpty(st))
		{
			if(str[i]==']'&&st->ar[st->top]=='['||str[i]=='}'&&st->ar[st->top]=='{'||str[i]==')'&&st->ar[st->top]=='(')
			{	
				char c=pop(st);
				po++;
				if(isEmpty(st)&&i==strlen(str)-1)
				{
					printf("Balanced ");
					break;
				}
		    }
			else
			{
				printf("Unblanced");
				break;
			}
		}
		else
		{
			printf("Unblanced");
			break;
		}
	}
	if(pu!=po&&i==strlen(str))
	printf("Unbalanced");
		free(st);
}
