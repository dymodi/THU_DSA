//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//class Node {
//public: 
//	Node() {}
//	int term;
//	Node *pre;
//	Node *next;
//};
//
//class list {
//public:
//	Node *head;
//	Node *tail;
//	int stepSize;
//	int totalNum;
//	list(int stepSize, int totalNum) {
//		head = new Node;
//		tail = new Node;
//		head -> term = -1;
//		tail -> term = -1;
//		head -> next = tail;
//		tail -> pre = head;
//		head -> pre = tail;
//		tail -> next = head;
//		this -> stepSize = stepSize;
//		this -> totalNum = totalNum;
//	}
//
//	Node* insert(Node *preNode, int currTerm) {
//		//Node *iter = head;
//		//while(iter -> term != preTerm) iter = iter -> next;
//		Node *iter = preNode;
//
//		for (int i = 0; i < stepSize; i++) {
//			iter = iter -> next;
//		}
//
//		Node *tmp = new Node;
//		tmp -> term = currTerm;
//		tmp -> next = iter;
//		tmp -> pre = iter -> pre;
//		iter -> pre -> next = tmp;
//		iter -> pre = tmp;
//
//		//printf("tmp.pre: %d\n",tmp->pre->term);
//
//		return tmp;
//		
//	}
//
//	void print(Node *last) {
//		for (int i = 0; i<totalNum; i++) {
//			printf("%d ", last -> term);
//			last = last -> pre;
//		}
//
//	}
//
//};
//
//int main() {
//
//	int stepSize, totalNum;
//	int id;
//	int id1,id2;
//
//	scanf("%d %d", &totalNum, &stepSize);
//	if (totalNum == 1) {
//		scanf("%d",&id);
//		printf("%d",id);
//	}
//	else if (totalNum == 2) {
//		scanf("%d %d",&id1, &id2);
//		printf("%d %d",id1,id2);
//	}
//	else {
//		list interView(stepSize,totalNum);
//		scanf("%d %d",&id1,&id2); 
//		interView.head->term = id1;
//		interView.tail->term = id2;
//		Node *iter = interView.tail;
//		for (int i = 0; i< totalNum-2; i++) {
//			scanf("%d",&id);
//			iter = interView.insert(iter,id);
//			//interView.print(iter);
//			//putchar('\n');
//		}
//		interView.print(iter);
//	}
//
//	return 0;
//}