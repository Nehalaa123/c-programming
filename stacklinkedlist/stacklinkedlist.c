  1 #include<stdio.h>
  2 #include<stdlib.h>
  3 struct Node
  4 {
  5     int data;
  6     struct Node *next;
  7 };
  8 struct Node *top = NULL;
  9 void push(int value)
 10 {
 11     struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
 12     if(newNode == NULL)
 13     {
 14         printf("stack overflow\n");
 15         return;
 16     }
 17     newNode->data = value;
 18     newNode->next = top;
 19     top = newNode;
 20     printf("%d pushed to stack\n",value);
 21 }
 22 void pop()
 23 {
 24     if (top == NULL)
 25     {
 26         printf("stack underflow\n");
 27         return;
 28     }
 29     struct Node *temp = top;
 30     printf("%d popped from stack\n",top->data);
 31     top = top->next;
 32     free(temp);
 33 }
 34 void display()
 35 {
 36     if(top == NULL)
 37     {
 38         printf("stack is empty\n");
 39         return;
 40     }
 41     struct Node *temp = top;
 42     printf("stack elements: ");
 43     while(temp != NULL)
 44     {
 45         printf("%d\n",temp->data);
 46         temp=temp->next;
 47     }
 48 }
 49 int main()
 50 {
 51  int choice,value;
 52     while(1)
 53     {
 54         printf("\n--stack using linkedlist--\n");
 55         printf("1.push\n2.pop\n3.display\n4.exit\n");
 56         printf("Enter your choice:");
 57         scanf("%d",&choice);
 58         switch(choice){
 59         case 1:
 60         printf("Enter value to push:");
 61         scanf("%d",&value);
 62         push(value);
 63         break;
 64         case 2:
 65         pop();
 66         break;
 67         case 3:
 68         display();
 69         break;
 70         case 4:
 71         printf("exit\n");
 72         return 0;
 73         default:
 74         printf("invalid choice\n");
 75      }
 76  }
 77 return 0;
 78 }


