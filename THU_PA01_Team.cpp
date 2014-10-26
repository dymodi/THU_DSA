//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <cmath>
//#include <stdlib.h>
//#include <stdio.h>
//using namespace std;
//
//int main()
//{
//
//	int n;
//	scanf("%d",&n);
//
//	int *already; 
//	already = (int*)calloc(n,sizeof(int));
//	
//	int *aWant, *bWant, *cWant;
//	aWant = (int*)calloc(n,sizeof(int));
//	bWant = (int*)calloc(n,sizeof(int));
//	cWant = (int*)calloc(n,sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d",&aWant[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%d",&bWant[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%d",&cWant[i]);
//	}
//
//	int query;
//	scanf("%d",&query);
//	//printf("query:%d\n",query);
//
//	int currentA = 0;
//	int currentB = 0;
//	int currentC = 0;
//	int count = 0;
//	while(count < n) {
//		//printf("count:%d\n",count);
//		while(already[aWant[currentA]-1]!=0) 
//			currentA++;
//		//printf("currentA:%d\n",currentA);
//		already[aWant[currentA]-1] = 1;
//		if (aWant[currentA]==query) {
//			printf("A\n");
//			break;
//		}
//		count++;
//		if (count == n) break;
//		
//		while(already[bWant[currentB]-1]!=0)
//			currentB++;
//		//printf("currentB:%d\n",currentB);
//		already[bWant[currentB]-1] = 1;
//		if (bWant[currentB]==query) {
//			printf("B\n");
//			break;
//		}
//		count++;
//		if (count == n) break;
//
//		while(already[cWant[currentC]-1]!=0)
//			currentC++;
//		//printf("currentC:%d\n",currentC);
//		already[cWant[currentC]-1] = 1;
//		if (cWant[currentC]==query) {
//			printf("C\n");
//			break;
//		}
//		count++;
//		if (count == n) break;
//
//		//printf("Now,already:\n");
//		//for (int i = 0; i < n; i++) 
//		//	printf("%d",already[i]);
//		//putchar('\n');
//
//	}
//
//
//	return 0;
//}