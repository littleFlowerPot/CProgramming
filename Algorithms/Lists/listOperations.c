#include "ListNode.h"
#include <stddef.h> /* NULL */
#include <stdio.h> /* printf() (for debugging) */

/* Current Assumptions:
 * - List is at least size 1
 */



int listLength(struct ListNode* head){
        int length = 1;
        if (head->next == NULL)
                return length;
        else
                return 1 + listLength(head->next);
}

int getElement(struct ListNode* head, int i){
        if (!head){
                printf("ERROR: List is empty");
                return -1;
        }

        if (i > listLength(head)){
                printf("ERROR: requested index exceeds list size");
                return -1;
        }
        if (!head->next)
                return head->val;
        if (i == 0)
                return head->val;
        else
                getElement(head->next, i-1);
}

struct ListNode* getNode(struct ListNode* head, int i){
        if (!head){
                printf("ERROR: List is empty");
                /*return -1; */
        }

        if (i > listLength(head)){
                printf("ERROR: requested index exceeds list size");
                /*return -1; */
        }
        if (!head->next)
                return head;
        if (i == 0)
                return head;
        else
                getElement(head->next, i-1);
}

void deleteNode(struct ListNode* node){
        if (!node->val)
                node = NULL;
        else{
                node->val = node->next->val;
                node->next = node->next->next;
        }
}
        

                
        
