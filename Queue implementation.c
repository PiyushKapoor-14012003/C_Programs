#include <stdio.h>
#include<stdlib.h>
typedef struct queue 
{

    int *que;
    int front;
    int rear;
    int size;
} queue;
queue *create_Queue(int cap)
{
    queue *ptr = (queue *)malloc(sizeof(queue));
    if (!ptr)
    	return NULL;
    ptr->size = cap;
    ptr->rear = -1;
	ptr->front= -1;
    ptr->que = (int *)malloc(sizeof(ptr->size * sizeof(int)));
    if (!ptr->que)
    	return NULL;
    return ptr;
}
void enqueue(queue *queue,int n)
{
	if(queue->rear==queue->size-1)
	{
		printf("Queue is full");
		return;
	}
	else
	{
		if(queue->rear==-1&&queue->front==-1)
			queue->front=0;
		queue->que[++queue->rear]=n;
	}
	
}
int dequeue(queue *queue)
{
	if((queue->rear==-1&&queue->front==-1)||queue->front>queue->rear)
	{
		printf("Queue is Empty \"Underflow\"");
		return -1;
	}
	else
	{
		return queue->que[queue->front++];
	}
}
int front(queue *queue) {
  if (queue->front ==-1||queue->front>queue->rear) 
  {
    printf("Queue is Empty \"Underflow\"");
    return -1;
  } else
    return queue->que[queue->front];
}
int rear(queue *queue)
{
	if(queue->rear==-1||queue->front>queue->rear)
	{
		printf("Queue is empty ");
		return -1;
	}
	else
		return queue->que[queue->rear];
}
int isEmpty(queue *queue) {
  if (queue->front == -1||queue->rear>queue->front||queue->rear==-1)
    return 1;
  else
    return 0;
}
int isFull(queue *queue) {
  if (queue->rear == queue->size - 1)
    return 1;
  else
    return 0;
}
int sizeOfQueue(queue *queue)
{
	if (queue->front ==-1||queue->front>queue->rear) 
  {
    printf("Queue is Empty \"Underflow\"");
    return -1;
  }
	else
		return queue->rear-queue->front+1;
}
void display(queue *queue)
{
	int i;
	for(i=queue->front;i<=queue->rear;i++)
		printf("%d ",queue->que[i]);
}
void shift(queue *queue)
{
	int sc=queue->front-0;
	int i=queue->front;
	while(i<=queue->rear)
	{
		queue->que[i-sc]=queue->que[i];
		i++;
	}
	queue->front=queue->front-sc;
	queue->rear=queue->rear-sc;
}
void  enter(queue *queue)
{
	int num;
	printf("Enter number to be enqueue");
	scanf("%d",&num);
	if(queue->front!=0&&queue->rear==queue->size-1)
		shift(queue);
	enqueue(queue,num);
	
}
int main() 
{
	int n, num, i,choice;
	printf("Enter total members in queue\n");
	scanf("%d",&n);
	queue *queue = create_Queue(n);
    printf("Enter %d Elements of queue :\n",n);
    for (i = 0; i < n; i++)
	{
    	scanf("%d", &num);
		enqueue(queue,num);
	}
	/*printf("*****MENU*****\n");
	printf("1. Enqueue \n");
	printf("2. Dequeue \n");
	printf("3. Check Front \n");
	printf("4. Check Rear \n");
	printf("5. Check isFull \n");
	printf("6. Check isEmpty \n");
	printf("7. Check Size of queue \n");
	printf("8. Display \n");
	printf("-1. To Terminate");
	printf("Enter your choice ");
	scanf("%d",&choice);*/
	do
	{
		printf("\n*****MENU*****\n");
		printf("1. Enqueue \n");
		printf("2. Dequeue \n");
		printf("3. Check Front \n");
		printf("4. Check Rear \n");
		printf("5. Check isFull \n");
		printf("6. Check isEmpty \n");
		printf("7. Check Size of queue \n");
		printf("8. Display \n");
		printf("-1. To Terminate\n");
		printf("Enter your choice \n");
		scanf("%d",&choice);
		if(choice==-1)
			break;
		switch(choice)
		{
			case 1:
			enter(queue);
			break;
			case 2:
			printf("Element dequeued is %d\n",dequeue(queue));
			break;
			case 3:
			printf("Element in Front is %d\n",front(queue));
			break;
			case 4:
			printf("Elemrnt at rear is %d\n",rear(queue));
			break;
			case 5:
			printf("%d\n",isFull(queue));
			break;
			case 6:
			printf("%d\n",isEmpty(queue));
			break;
			case 7:
			printf("Current Size of queue is %d\n", sizeOfQueue(queue));
			break;
			case 8:
			display(queue);
			break;
			default :
			printf("Wrong Choice");
		}
	}while(choice!=-1);
	free(queue);
	return 0;
}