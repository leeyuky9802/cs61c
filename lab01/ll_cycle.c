#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *seen[100];
    int point = 0;

    seen[point] = head;
    head = head->next;

    while(head!=NULL){
        for(int i=0; i<=point;i++){
            if(head == seen[i])
                return 1;
        }
        point ++;
        seen[point] = head;
        head = head->next;

    }
    return 0;
}