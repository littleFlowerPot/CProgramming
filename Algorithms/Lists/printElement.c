#include "ListNode.h"
#include <stddef.h> /* NULL */

/* Current Assumptions:
 * - List is at least size 1
 * - The element we want to print is less than or eq to last element
 */



int printElement(struct ListNode* head, int i){
        if (head->next == NULL)
                return head->val;
        if (i == 0)
                return head->val;
        else
                printElement(head->next, i-1);
}
        
