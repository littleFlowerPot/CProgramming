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

int printElement(struct ListNode* head, int i){
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
                printElement(head->next, i-1);
}

                
        