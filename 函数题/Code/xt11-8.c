#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem(struct ListNode *L, int m);
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

struct ListNode *readlist()
{
    int in;
    struct ListNode *head = NULL, *tmp_pre = NULL;
    while (scanf("%d", &in) && in != -1)
    {
        struct ListNode *tmp_next = (struct ListNode *)malloc(sizeof(struct ListNode));
        tmp_next->data = in;
        tmp_next->next = NULL;
        if (!head)
        {
            head = tmp_next;
            tmp_pre = tmp_next;
        }
        else
        {
            tmp_pre->next = tmp_next;
            tmp_pre = tmp_next;
        }
    }
    return head;
}

struct ListNode *deletem(struct ListNode *L, int m)
{
    struct ListNode *res = L;
    struct ListNode *tmp = NULL;
    while (!L)
    {
        if (L->data == m)
        {
            if (L == res)
            { //前部往后走
                tmp = L + 1;
                L->next = NULL;
                free(L);
                L = tmp;
                res = L;
            }
            else
            { //中间断开
                (L - 1)->next = (L + 1);
                tmp = L + 1;
                L->next = NULL;
                free(L);
                L = tmp;
            }
        }
        else
            L++;
    }
    return res;
}