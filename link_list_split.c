#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int i;
    struct Node *next;
};
struct Node* makenode()
{
    struct Node *p1,*p2,*head;
    int n=2;
    p1=p2=(struct Node*)malloc(sizeof(struct Node));
    
    printf("input the first integer\n");
    scanf("%d",&p1->i);
    head=p1;
    while (p1->i!=0)
    {
        p1=(struct Node*)malloc(sizeof(struct Node));
        printf("input the %d number\n",n);
        n+=1;
        scanf("%d",&p1->i);
        if (p1->i==0)
        {
            p2->next=NULL;
            break;
        }
        else
        {
        p2->next=p1;
        p2=p1;

        }
        

    }

    return head;


}
void split(struct Node *head,struct Node *array[2])
{
    struct Node *f,*l;

    f=l=head;
    while (f->next!=NULL&&f->next->next!=NULL)
    {
        l=l->next;
        f=f->next->next;

    }
    array[0]=head;
    array[1]=l->next;
}
int main()
{
    int i,j;
    struct Node *p,*f,*l,*head,*a[2];
    p=makenode();
    head=p;
    split(p,a);
    f=a[0];
    l=a[1];
    while (f!=NULL)
    {   
        printf("%d ",f->i);
        f=f->next;
    }    
    printf("\n");
    while (l!=NULL)
    {   
        printf("%d ",l->i);
        l=l->next;
    }
    

    //printf("%d",p->i);
    //p=p->next;
    //if (p==NULL) printf("yes");
    

    


    
}