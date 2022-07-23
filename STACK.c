#include <stdio.h>
#include <stdlib.h>
struct Stack
{
 int size;
 int top;
 int *S;
};
void create(struct Stack *st)
{
 printf("Enter Size please!!! :");
 scanf("%d",&st->size);
 st->top=-1;
 st->S=(int *)malloc(st->size*sizeof(int));
}
void Display(struct Stack st)
{
 int i;
 for(i=st.top;i>=0;i--)
 printf("%d ",st.S[i]);
 printf("\n");

}
void push(struct Stack *st,int x)
{
 if(st->top==st->size-1)
 printf("Stack overflow\n");
 else
 {
 st->top++;
 st->S[st->top]=x;
 }

}
void pop(struct Stack *st)
{
 int x=-1;

 if(st->top==-1)
 printf("Stack Underflow\n");
 else
 {
 st->S[st->top--];
 }
 
}
int isEmpty(struct Stack st)
{
 if(st.top==-1)
 return 1;
 return 0;
}
int isFull(struct Stack st)
{
 return st.top==st.size-1;
}
int stackTop(struct Stack st)
{
 if(!isEmpty(st))
 return st.S[st.top];
 return -1;
}
int main()
{
 struct Stack st;
 create(&st);
 
 for(int i=1;i<=st.size;i++){
    printf("PUSH %d IN THE BOX\n",i*10);
    push(&st,i*10);
 }
 printf("APTER PUSH: ");
 Display(st);
 
 printf("POP %d OUT THE BOX\n",stackTop(st));
 pop(&st);
 printf("pop %d OUT THE BOX\n",stackTop(st));
 pop(&st);
 printf("APTER POP: ");
 Display(st);

 return 0;
}