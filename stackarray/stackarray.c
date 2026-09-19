 #include<stdio.h>
  2    int main()
  3    {
  4    int stack[100];
  5    int top=-1;
  6    int n,ch,val,i;
  7    printf("Enter the size of the stack:");
  8    scanf("%d",&n);
  9    if(n<=0||n>100)
 10   {
 11   printf("invalid size\n");
 12   return 1;
 13   }
 14   while(1)
 15   {
 16   printf("\nSTACK OPERATIONS\n");
 17   printf("1.push\n2.POP\n3.DISPLAY\n4.EXIT\n");
 18   printf("Enter your choice:");
 19   scanf("%d",&ch);
 20   if(ch==1)
 21   {
 22   if(top==n-1)
 23   {
 24   printf("Stack overflow");
 25   }
 26   else{
 27   printf("Enter value:");
 28   scanf("%d",&val);
 29   top++;
 30   stack[top]=val;
 31   printf("%d Pushed\n",val);
 32   }
 33   }
 34   else if(ch==2)
 35   {
 36   if(top==-1)
 37   {
 38   printf("Stack underflow");
 39   }
 40   else{
 41   printf("%d Popped\n",stack[top]);
 42   top--;
 43   }
 44   }
 45   else if(ch==3)
 46   {
 47   if(top==-1)
 48   {
 49   printf("Stack is empty");
 50   }
 51   else{
 52   printf("Stack elements are:");
 53   for(i=top;i>=0;i--)
 54   {
 55   printf("%d",stack[i]);
 56   }
 57   }
 58   }
 59   else if(ch==4)
 60   {
 61   break;
 62   }
 63   else
 64   {
 65   printf("Invalid choice\n");
 66   }
 67   }
 68   return 0;
 69   }

