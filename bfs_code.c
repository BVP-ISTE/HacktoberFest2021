#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    char ele;
    struct Queue *next;
} * f, *r;

void init()
{
    f = r = NULL;
}

struct Queue *createNode()
{
    struct Queue *temp;
    temp = (struct Queue *)malloc(sizeof(struct Queue));
    return temp;
}

int isEmpty()
{
    if ((f == NULL) && (r == NULL))
        return 1;
    else
        return 0;
}

void Enqueue(char ele)
{
    struct Queue *temp;
    if (isEmpty())
    {
        temp = createNode();
        temp->next = NULL;
        temp->ele = ele;
        f = r = temp;
    }
    else
    {
        temp = createNode();
        r->next = temp;
        temp->ele = ele;
        temp->next = NULL;
        r = temp;
    }
}

char Dequeue()
{
    char ele;
    ele = f->ele;
    struct Queue *temp;
    temp = f;
    f = f->next;
    free(temp);
    return ele;
}

void BFS(int **a, char s)
{
}

int main()
{
    int n;
    printf("\nEnter number of vertices: ");
    scanf("%d", &n);

    int a[n][n];
    int i, j;
    char v[n];

    printf("\nEnter Vertices : ");
    for (int i = 0; i < n; i++)
        scanf(" %c", &v[i]);

    printf("\nEnter graph in tersm of Adjacency Matrix : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    BFS(a, v[0]);
}