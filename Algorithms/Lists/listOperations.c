#include "ListNode.h"
#include <stddef.h> /* NULL */
#include <stdio.h> /* printf() (for debugging) */

/* Current Assumptions:
 * - List is at least size 1
 * - List has integer data
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
                /*getElement(head->next, i-1);*/
                getNode(head->next, i-1);
}

void deleteNode(struct ListNode* node){
        if (!node->next)
                node = NULL;
        else{
                node->val = node->next->val;
                node->next = node->next->next;
        }
}

struct ListNode* deleteNthNodeFromStart(struct ListNode* head, int n){
        if(!head->next)
                /*Won't matter what n is */
                return head = NULL;
        else if (n == 1){
                head->val = head->next->val;
                head->next = head->next->next;
                return head;
        }
        else
                deleteNthNodeFromStart(head->next,n-1);
}
        

                
        
