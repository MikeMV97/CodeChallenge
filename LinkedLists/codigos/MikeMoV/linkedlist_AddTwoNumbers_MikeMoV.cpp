#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ls_suma = new ListNode((l1->val + l2->val) % 10);
        ListNode* root = ls_suma;
        int suma_dig = 0;
        int acarreo = (l1->val + l2->val) / 10;
        
        while(l1->next || l2->next){
            suma_dig = acarreo;
            
            if( l1->next ){
				l1 = l1->next;
				suma_dig += l1->val;
			} 
			if( l2->next ){
				l2 = l2->next;
				suma_dig += l2->val;
			}
			
			ls_suma->next = new ListNode(suma_dig % 10);
			ls_suma = ls_suma->next;
            
            acarreo = suma_dig / 10;
        }
        if (acarreo > 0){
            ls_suma->next = new ListNode(acarreo);
        }
        
        return root;
    }
};

int main(void){

    return 0;
}
