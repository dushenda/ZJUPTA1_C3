#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    // Odd = getodd(&L);
    // printlist(Odd);
    printlist(L);

    return 0;
}

struct ListNode *readlist()
{
    int s;
    struct ListNode *l,*res;
    s = scanf("%d",&s);
    l->data=s;
    l->next=NULL;
    res = l;
    while (scanf("%d",&s)&&s!=-1)
    {
        struct ListNode tmp = {.data=s,.next=NULL};
        l->next=&tmp;
        l++;
    }
    return res;
}
struct ListNode *getodd( struct ListNode **L )
{
    
}