#include "ListNode.h"
#include <stdio.h>

void printList(struct ListNode* head){
        if(!head)
                printf("List is empty!");
        else{
                struct ListNode* next_node = head->next;
                if(!next_node)
                        printf("%d", head->val);
                else{
                        printf("%d--->", head->val);
                        printList(next_node);
                }
        }
} 
                        
