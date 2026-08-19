typedef struct Node{
    int value;
    struct Node* next;
}Node;
/* create
 * push=insert at head O(1)
 * pop=remove from head (delete the first node) O(1)
 * peek=value of first node (tos->next->value) O(1)
 * is_full=N/A
 * is_empty=TOS==null O(1)
 * traversal=traversal of linked list O(N)
 */
