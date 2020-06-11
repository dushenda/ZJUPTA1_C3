#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd(struct ListNode **L);
void printlist(struct ListNode *L)
{
    struct ListNode *p = L;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);
    return 0;
}

struct ListNode *readlist()
{
    int input;
    struct ListNode *res = NULL, *tmp_pre = NULL;
    while (scanf("%d", &input) && input != -1)
    {
        struct ListNode *tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (!res)
        {
            tmp->data = input;
            tmp->next = NULL;
            res = tmp;
            tmp_pre = tmp;
        }
        else
        {
            tmp->data = input;
            tmp->next = NULL;
            tmp_pre->next = tmp;
            tmp_pre = tmp;
        }
    }
    return res;
}

struct ListNode *getodd(struct ListNode **L)
{ //return odd,L=even
    struct ListNode *odd = NULL, *even = NULL, *piter = *L, *res;
    *L = even, res = odd;
    int is_end = 1;
    while (is_end)
    { //0-倒数第二个
        if (!piter->next)
            is_end--;

        if (piter->data % 2 == 1)
        {
            if (!odd)
            {
                odd = piter;
                res = piter;
            }
            else
            {
                odd->next = piter;
                odd = piter;
            }
            piter = piter->next;
            odd->next = NULL;
        }
        else
        {
            if (!even)
            {
                *L = piter;
                even = piter;
            }
            else
            {
                even->next = piter;
                even = piter;
            }
            piter = piter->next;
            even->next = NULL;
        }
    }
    //最后的节点
    return res;
}
//test
//1 2 2 3 4 5 6 7 -1