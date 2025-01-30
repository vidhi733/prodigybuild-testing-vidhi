// Implementation of Binary Search Tree 
#include <stdio.h>
#include <stdlib.h>

struct BST {
    int data;
    struct BST* left;
    struct BST* right;
};

struct BST *CreateNode() {
    struct BST* new = (struct BST*) malloc(sizeof(struct BST));
    new->left = NULL;
    new->right = NULL;
    return new; 
};

void Insert(struct BST** RootPtr, int value) {
    struct BST* temp = *RootPtr;
    if (temp == NULL) { /*When list is empty*/
        struct BST* NewNode = CreateNode();
        NewNode->data = value;
        *RootPtr = NewNode;
    } else if (value <= temp->data) { /*If user value is less then current node value insert in left of the node...*/
        struct BST* NewNode = CreateNode();
        NewNode->data = value;
        temp->left = NewNode;
    } else { /*If user value is greater then current node value insert at right of the node*/
        struct BST* NewNode = CreateNode();
        NewNode->data = value;
        temp->right = NewNode;
    }
}

int Search(struct BST* RootPtr, int item) { /*Implemented search using recursion*/
    if(RootPtr == NULL) {
        return 0; /*Returns 0 if list is empty*/
    } else if(item == RootPtr->data) {
        return 1; /*Returns 1 when element found*/
    } else if(item < RootPtr->data) {
        return Search(RootPtr->left, item); /*Otherwise search in left side of binary tree if searching value is less then the current node value*/
    } else {
        return Search(RootPtr->right, item); /*Otherwise search in right side of binary tree if searching value is greater then the current node value*/
    }
}

int main() {
    struct BST* RootPtr = NULL;
    int item, cont, key;
    do {
        printf("Enter item: ");
        scanf("%d",&item);
        Insert(&RootPtr, item);

        printf("\n1 to keep inserting/ 0 to Exit: ");
        scanf("%d",&cont);
    } while(cont == 1);

    printf("\nEnter element to search: ");
    scanf("%d",&key);

    if(Search(RootPtr, key) == 0) {
        printf("\nFound\n");
    } else {
        printf("\nNot Found\n");
    }
    return 0;
}

// <p><strong>SonarCloud Analysis:</strong> Issues Detected in c/algorithms/BST.c. Below are the detected issues with details.</p>
// <ul><li><strong>Line 49:</strong> Define each identifier in a dedicated statement. <em>(Severity: MINOR)</em> <span>Location: offsets 4 to 23</span><li><strong>Line 65:</strong> Potential leak of memory pointed to by 'RootPtr' <em>(Severity: BLOCKER)</em> <span>Location: offsets 8 to 14</span></ul>
// Resolve SonarCloud issues in c by validating inputs, implementing secure authentication, preventing injection vulnerabilities, conducting regular security audits, and ensuring continuous improvement of the code's security posture. Additionally, conduct regular security audits to identify and resolve potential vulnerabilities, address hotspots, and ensure continuous improvement of the code's security posture.