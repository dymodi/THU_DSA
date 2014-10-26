//// First thoughts
//// Gain : 70 points

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//
//int *xi;
//int *wi;
//
//int objCal(int x, int n) {
//	int objVal = 0;
//	for (int i = 0; i < n; i++) {
//		//printf("x[i]: %d\t wi[i]:%d\n",xi[i],wi[i]);
//		objVal += abs(x - xi[i]) * wi[i];
//		//printf("optVal: %d\n",objVal);
//	}
//	return objVal;
//}
//
//
//int main() {
//
//
//	int n;
//	scanf("%d",&n);
//	xi = (int*)calloc(n,sizeof(int));
//	wi = (int*)calloc(n,sizeof(int));
//	int totalSum = 0;
//	int weightSum = 0;
//	int floorObj = 0;
//	int ceilObj = 0;
//
//	int realN = n;
//	scanf("%d %d", &xi[0], &wi[0]);
//	int maxWeight = wi[0];
//	int maxPosi = xi[0];
//	int leftPosi = xi[0];
//	int rightPosi = xi[0];
//	for (int i = 1; i < n; i++) {
//		scanf("%d %d", &xi[i], &wi[i]);
//		if (wi[i] > maxWeight) {
//			maxWeight = wi[i];
//			maxPosi = xi[i];
//		}
//		if (xi[i] > rightPosi) {
//			rightPosi = xi[i];
//		}
//		else if (xi[i] < leftPosi) {
//			leftPosi = xi[i];
//		}
//		//totalSum += xi[i] * wi[i];
//		//weightSum += wi[i];
//	}
//
//	int leftBoundFlag = 0;
//	int rightBoundFlag = 0;
//	int turnFlag = 0;
//	int optFoundFlag = 0;
//
//	int optPosi = maxPosi;
//	int optVal = objCal(optPosi, realN);
//	//printf("max Posi: %d\t optVal: %d\n",optPosi, optVal);
//
//	if (optPosi == leftPosi) leftBoundFlag = 1;
//	if (optPosi == rightPosi) rightBoundFlag = 1;
//
//	int optValLeft, optValRight;
//
//	if (leftBoundFlag == 1) optValLeft = optVal + 1;
//	else optValLeft = objCal(optPosi-1, realN);
//
//	if (rightBoundFlag == 1) optValRight = optVal + 1;
//	else optValRight = objCal(optPosi+1, realN);
//
//	if (optValLeft > optVal) {
//		if (optValRight > optVal) optFoundFlag = 1;
//		else
//			turnFlag = 1;
//	}
//
//	else if (optValLeft == optVal) {
//			if (optValRight < optVal) turnFlag = 1;
//			else turnFlag = -1;
//	}
//
//	else turnFlag = -1;
//
//	if (turnFlag == -1) {
//		while (optFoundFlag != 1) {
//			optPosi--;
//			optVal = optValLeft;
//			if (optPosi == leftPosi) optFoundFlag = 1;
//			else {
//				optValLeft = objCal(optPosi-1, realN);
//				if (optValLeft > optVal) optFoundFlag = 1;
//			}
//		}
//	}
//
//	if (turnFlag == 1) {
//		while (optFoundFlag != 1) {
//			optPosi++;
//			optVal = optValRight;
//			if (optPosi == rightPosi) optFoundFlag = 1;
//			else {
//				optValRight = objCal(optPosi+1, realN);
//				if (optValRight > optVal) optFoundFlag = 1;
//			}
//		}
//	}
//
//	printf("%d\n",optPosi);
//	printf("%d\n",optVal);
//
//
//
//	return 0;
//
//}