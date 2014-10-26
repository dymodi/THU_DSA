// Third thoughts
// Gain : 80 points

#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;


int *xi;
int *wi;

int objCal(int x, int n) {
	int objVal = 0;
	for (int i = 0; i < n; i++) {
		//printf("x[i]: %d\t wi[i]:%d\n",xi[i],wi[i]);
		objVal += abs(x - xi[i]) * wi[i];
		//printf("optVal: %d\n",objVal);
	}
	return objVal;
}


int main() {


	int n;
	scanf("%d",&n);
	xi = (int*)calloc(n,sizeof(int));
	wi = (int*)calloc(n,sizeof(int));

	int realN = n;
	scanf("%d %d", &xi[0], &wi[0]);
	int leftPosi = xi[0];
	int rightPosi = xi[0];
	for (int i = 1; i < n; i++) {
		scanf("%d %d", &xi[i], &wi[i]);
		if (xi[i] > rightPosi) rightPosi = xi[i];
		else if (xi[i] < leftPosi) leftPosi = xi[i];
	}

	int tmp;
	int optPosi = rightPosi;
	int optVal = objCal(optPosi, n);
	for (int i = rightPosi; i > leftPosi-1; i--) {
		tmp = objCal(i, n);
		if (tmp <= optVal) {
			optVal = tmp;
			optPosi = i;
		}
	}


	printf("%d\n",optPosi);
	printf("%d\n",optVal);



	return 0;

}