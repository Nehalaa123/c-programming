  1  #include<stdio.h>
  2 int main()
  3 {
  4     int i,n,ch,v;
  5     printf("Enter size of queue:");
  6     scanf("%d",&n);
  7     if(n<=0)
  8     {
  9         printf("invalid size");
 10         return 1;
 11     }
 12     int queue[n];
 13     int f=-1,r=-1;
 14     while(1)
 15     {
 16         printf("MENU\n1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n");
 17         printf("Enter your choice:");
 18         scanf("%d",&ch);
 19         if (ch==1)
 20         {
 21             if(r==n-1)
 22             {
 23                 printf("Queue is full\n");
 24             }
 25             else
 26             {
 27                 printf("Enter the element:");
 28                 scanf("%d",&v);
 29                 r=r+1;
 30                 queue[r]=v;
 31                 if(f==-1)
 32                 {
 33                     f=0;
 34                 }
 35
 36             }
 37         }
 38         else if (ch==2)
 39         {
 40             if(f==-1||f>r)
 41             {
 42                 printf("Queue is empty\n");
 43             }
 44             else
 45             {
 46                 printf("Deleted%d\n",queue[f]);
 47                 f=f+1;
 48             }
 49         }
 50         else if (ch==3)
 {
 52             if(f==-1||f>r)
 53             {
 54                 printf("Queue is empty\n");
 55             }
 56             else
 57             {
 58                 printf("Queue is:");
 59                 for(i=f;i<=r;i++)
 60                 {
 61                     printf("%d",queue[i]);
 62                 }
 63                 printf("\n");
 64             }
 65         }
 66         else if (ch==4)
 67         {
 68             break;
 69         }
 70         else
 71         {
 72             printf("invalid choice");
 73         }
 74     }
 75     return 0;
 76 }

