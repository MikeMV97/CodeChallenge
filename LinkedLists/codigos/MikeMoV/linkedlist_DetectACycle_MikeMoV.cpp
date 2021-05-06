#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
}
 
bool has_cycle(Node* head) {
    unordered_set<Node *> visitados;
    
    while(head){
		auto isRepetido = visitados.find(head) != visitados.end();
		if (isRepetido){
			return true;
		}
		
		visitados.insert(head);
		head = head->next;
	}
    
    return false;
}

int main(void){

    return 0;
}
