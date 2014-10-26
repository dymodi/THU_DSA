//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//class stack {
//public:
//	int size;
//	int index;
//	int *s;
//	stack(int selfSize) {
//		size = selfSize;
//		s = new int[size];
//		for (int i = 0; i < size; i++) s[i] = 0;
//		index = 0;
//	}
//	int push(int e) { 
//		if (isFull()) return -1;
//		s[index] = e;
//		index++;
//		//if (index >= size - 2) resize(2*size);
//		return 0;
//	}
//
//	int pop () {
//		if (isEmpty()) return -1;
//		index--;
//		int temp = s[index];
//		s[index] = 0;
//		//if (index < size/2) resize(size/2);
//		return temp;
//	}
//
//	bool isFull() {
//		if (index == size) return true;
//		return false;
//	}
// 
//	bool isEmpty() {
//		if (index == 0) return true;
//		return false;
//	}
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
//
//int main() {
//	int n, m, flag, temp, j;
//	scanf("%d %d", &n, &m);
//	stack S(m), A(n), B(n);
//	for (int i = 0; i < n; i++) A.push(n-i);
//	int *goal = new int[n];
//	int *move = new int[2 * n];
//	for (int i = 0; i < n; i++) scanf("%d",&goal[i]);
//	for (int i = 0; i < 2 * n; i++) move[i] = 0;
//	flag = 1; j = 0;
//
//	int sTop;
//	for (int i = 0; i < n; i++) {
//		//printf("i is: %d\n",i);
//		sTop = S.pop();
//		//printf("sTop is: %d\n",sTop);
//		//printf("goal[i] is: %d\n",goal[i]);
//		if (sTop == goal[i]) {
//			move[j] = 2;
//			j++;
//		}
//		else {
//			while(sTop != goal[i]) {
//				if (sTop != -1) S.push(sTop);				
//				temp = A.pop();
//				if (temp == -1) {
//					flag = 0;
//					break;
//				}
//				if (S.push(temp) == -1) {
//					flag = 0;
//					break;
//				}
//				move[j] = 1;
//				j++;
//				sTop = S.pop();
//			}
//			if (flag == 0) break;
//			if (sTop == goal[i]) {
//				move[j] = 2;
//				j++;
//			}
//		}
//	}
//	if (flag == 0) printf("No\n");
//	else 
//		for (int i = 0; i < 2 * n; i++) {
//			if (move[i] == 1) printf("push\n");
//			else if (move[i] == 2) printf("pop\n");
//			else printf("error!\n");
//		}
//
//	
//	return 0;
//}