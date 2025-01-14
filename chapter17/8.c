#include <stdio.h>
#include <stdlib.h>

#define MALLOC(p,s) \
    if ((p = malloc(s)) == NULL) { \
        fprintf(stderr, "Insufficient Memory Error\n"); \
        exit(EXIT_FAILURE); \
    }

#define SWAP(temp, a, b) { \
    temp = a; \
    a = b; \
    b = temp; \
}

#define MAX(p,s) ((p > s) ? p : s)

#define REALLOC(p,s) \
    if ((p = realloc(p,s)) == NULL) { \
        fprintf(stderr, "Inssufficient Memory Error\n"); \
        exit(EXIT_FAILURE); \
    }

typedef struct node {
    int data;
    struct node* next;
} node, *nodePointer;

int main () {
    int num;
    nodePointer head = NULL;

    printf("Enter numbers (a negative number to step)\n");
    while (1) {
        printf("Enter a number : ");
        scanf("%d", &num);
        if (num != -1) {
            nodePointer newNode = NULL;
            MALLOC(newNode, sizeof(node));
            newNode->data = num;
            newNode->next = NULL;

            if (head == NULL) {
                head = newNode;
            } else {
                nodePointer current = head;
                while (current->next != NULL) {
                    current = current->next;
                }
                current->next = newNode;
            }
        } else {
            break;
        }
    }

    nodePointer current = head;
    printf("Linked list: ");
    while (current != NULL) {
        printf(" %d ", current->data);
        printf("->");
        current = current->next;
    }
    printf(" NULL ");
}