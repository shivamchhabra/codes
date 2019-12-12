#include <stdio.h>
#include <stdlib.h>
int arr[100],top=0;
void push(int size)
{

    if(top<size)
    {
        printf("number you want to push\n");
        int inp2;
        scanf("%d", &inp2);
        arr[top]=inp2;
        top++;
        printf("added %d\n", arr[top-1]);

    }else
    {
        printf("stack overflow!!\n");
    }

}
void pop()
{
    if(top==0)
    {
         printf("no variable is there in stack\n");
    }else
    {
            printf("removed %d\n", arr[top-1]);
            arr[top-1]=0;
            top--;
    }

}
void peek()
{
if(top==0)
{
    printf("no variable is there in stack\n");
}else{
    printf("You are watching last variable %d\n", arr[top-1]);
     }
}


int main()
{
    int inp1,i,count=1,size=101;
    while((size<=0) || (size>=99))
    {
        printf("Enter the size of stack you want to take\n");
        scanf("%d", &size);
        if((size<=0) || (size>=100))
        printf("size must be greater than 0 or less than 100\n");
    }


    printf("1-push, 2-pop, 3-peek, 0-to-stop\n");


    while(count!=0)
    {
        scanf("%d", &inp1);
        switch (inp1)
        {
           case 1:push(size);
           break;

           case 2:pop();
           break;

           case 3:peek();
           break;

           case 0:
           count=0;
           break;

           default:printf("no such command");
           break;
        }
        if(count!=0)
        printf("1-push, 2-pop, 3-peek, 0-to-stop\n");
    }

}
