/* TODO : include listNode.h, but will need header guards */
/* Current Assumptions:
 * - List is at least size 1
 * - List has integer data
 */

int listLength(struct ListNode* head);
int getElement(struct ListNode* head, int i);
struct ListNode* getNode(struct ListNode* head, int i);
void deleteNode(struct ListNode* node);
struct ListNode* deleteNthNodeFromStart(struct ListNode* head, int n);
        

                
        
