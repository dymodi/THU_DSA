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
//	list() {
//		head = new Node;
//		tail = new Node;
//		head -> term = 0;
//		tail -> term = -1;
//		head -> next = tail;
//		tail -> pre = head;
//		head -> pre= NULL;
//		tail -> next = NULL;
//	}
//
//	void insert(int value) {
//		if (value > head->term) {
//			Node *tmp = new Node;
//			head->next->pre = tmp;
//			tmp->next = head->next;
//			head->next = tmp;			
//			tmp -> pre = head;
//			tmp -> term = head -> term;
//			head -> term = value;
//		}
//		else {
//			Node *iter = head;
//			while(iter->term >= value) {
//				iter = iter->next;
//			}
//			Node *tmp = new Node;
//			tmp->term = value;
//			tmp->next = iter;
//			tmp->pre = iter->pre;
//			iter->pre->next = tmp;
//			iter->pre = tmp;
//		}
//	}
//
//	void remove(int value) {
//		if (value == head -> term) {
//			Node *tmp = head->next;
//			int tmpTerm = head -> next->term;
//			head->next = head -> next -> next;
//			head->next->pre = head;
//			head -> term = tmpTerm;
//			delete tmp;
//		}
//		else {
//			Node *iter = new Node;
//			iter = 	head;
//			while(iter->term != value) {
//				iter = iter->next;
//			}
//			iter->pre->next = iter->next;
//			iter->next->pre = iter->pre;
//			delete iter;
//		}
//	}
//
//
//
//
//private:
//	//void resize(int newSize) {
//	//	int *temp = new int[newSize];
//	//	for (int i = 0; i < index; i++) 
//	//		temp[i] = s[i];
//	//	s = temp;
//	//	size = newSize;
//	//	delete temp;	//This step may 
//	//}
//};
//
//int main()
//{
//	list seq;
//	int n, q_head, q_tail, k;
//	int *queue;
//	char c;
//	int *show;
//	int height;
//
//	scanf("%d\n",&n);
//
//	queue = (int*)calloc(n,sizeof(int));
//	show = (int*)calloc(n,sizeof(int));
//
//	q_head = 0; q_tail = 0; k = 0;
//	for (int i = 0; i < n; i++) {
//		//scanf("%c", &c);
//		c = getchar();
//		if (c =='E') {
//			scanf(" %d\n", &height);
//			queue[q_tail] = height;
//			q_tail++;
//			seq.insert(height);
//		}
//		else if (c =='D') {
//			getchar();
//			show[k] = queue[q_head];
//			k++;
//			seq.remove(queue[q_head]);
//			q_head++;
//		}
//		else if (c =='M') {
//			getchar();
//			show[k] = seq.head->term;
//			k++;
//		}
//		//else
//		//	printf("ERROR!\n");
//	}
//
//	for (int i = 0; i < k; i++)
//		printf("%d\n",show[i]);
//
//	return 0;
//
//}