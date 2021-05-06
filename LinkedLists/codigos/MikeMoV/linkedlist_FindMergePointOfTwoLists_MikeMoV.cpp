#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode {
public:
   int data;
   SinglyLinkedListNode* next;
};

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
	while( head1 ){
		SinglyLinkedListNode* head2_loop = head2;
		while ( head2_loop ){
			if (head2_loop == head1){
				return head1->data;
			}
			head2_loop = head2_loop->next;
		}
		head1 = head1->next;
	}
	return head1->data;
}


int main(void){

    return 0;
}

