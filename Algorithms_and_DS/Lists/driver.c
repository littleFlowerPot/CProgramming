#include "ListNode.h"
#include "listOperations.h"
#include "printList.h"
#include <stdio.h>
#include <stdlib.h> /*atoi*/
#include <string.h> /*strcmp*/

int main(int argc, char** argv){
        if (argc == 1){
                printf("\nNot enough arguments -please provide"
                       " one more - the element of the list (where 1 is the first elelement) you"
                       " wish to delete\n\n");
                printf("Add flag --help to for more details\n\n");
                return -1;
        }

        /**TODO: find out what is going on here. It doesn't
         * work as I thought it would.
         * Potentially useful printouts to help understand
         * 
         *   printf("%s", argv[1]);
         *   printf("%p", argv);
         *   printf("%p",argv[1]);
         *
         *...This doesn't work either! :
         *   if(strcmp(argv[1],"--help"))
         *      printf("\nUsage:\n"
         *              "driver.c <int representing element to delete>\n"
         *             "Eg. driver.c 1 to delete the _second_ element of"
         *              "the list");
         **/

        int element_to_delete = atoi(argv[1]);
        struct ListNode* head, *no_head;
        struct ListNode node1, node2,node3,node4;
        node1.val = 1;
        node1.next = &node2;
        node2.val = 2;
        node2.next = &node3;
        node3.val = 3;
        node3.next = &node4;
        node4.val = 4;
        node4.next = NULL;

        head = &node1;

        /*printList(head);
        printf("\n");
        */

        no_head = NULL;
        /*printf("\n%d\n", getElement(head, 1));
        printf("\n%d\n", getElement(no_head, 1));
        printf("\n%d\n",getNode(head,1)->val);
        deleteNode(&node3);
        printList(head);
        printf("\n%d\n",(node1.next->val));
        printf("\n%d\n",getElement(head,1));*/

        printf("\nOriginal List\n\n");
        printList(head);
        printf("\n");

        printf("\nList after deleting Nth Node List\n\n");
        struct ListNode* head_new = deleteNthNode(head,element_to_delete);
        printList(head_new);
        printf("\n");


        /*struct ListNode* return_node = deleteFirst_N_Nodes(head,element_to_delete);
        printf("%d\n%d", node2.val,node2.next->val);

        printf("Return value(the data in the value) from function 'deleteFirst_N_Nodes(...)' is:\n");
        printf("%d", return_node->val);

        printf("%s%d%s","\nList after deletion of ", element_to_delete,"st/th list element\n\n");
        printList(head);
        printf("\n");
        printList(return_node);
        */
        
        /*
        deleteFirst_N_Nodes(head,1);
        printf("\n");
        printList(head);
        printf("\n");

        deleteFirst_N_Nodes(head,1);
        printf("\n");
        printList(head);
        printf("\n");
        */


        
        return 0;
}
