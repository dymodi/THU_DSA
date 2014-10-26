//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//long long inversion = 0;
//
//// Merge part for Merge Sort
//void merge(long long *A, long long lo, long long hi, long long mi)
//{
//	long long lb = mi - lo;
//	long long *B = new long long[lb];
//	for (long long i = lo; i < mi; B[i - lo] = A[i++]);
//	long long *C = &A[0] + mi;
//	long long lc = hi - mi;
//
//	//printf("A: ");for(long long i = lo; i < hi; i++) printf("%d ",A[i]); putchar('\n');
//	//printf("B: ");for(long long i = 0; i < lb; i++) printf("%d ",B[i]);putchar('\n');
//	//printf("C: ");for(long long i = 0; i < lc; i++) printf("%d ",C[i]);putchar('\n');
//
//	for(int i = lo, j = 0, k = 0; j < lb;)
//	{
//
//		if((k < lc)&&(C[k] < B[j])) {
//			A[i++] = C[k++];
//			//printf("lo:%d mi:%d hi:%d j:%d lb:%d\n",lo,mi,hi,j,lb);
//			//printf("Inv Number:%d\n",C[k-1]);
//			inversion = inversion + 1 + (lb - j - 1);
//
//		}
//		if((lc <= k)||(B[j]<=C[k])) {
//			A[i++] = B[j++];
//			//order++;
//		}
//
//	}
//
//	//printf("A: ");for(long long i = lo; i < hi; i++) printf("%d ",A[i]); putchar('\n');
//	//printf("B: ");for(long long i = 0; i < lb; i++) printf("%d ",B[i]);putchar('\n');
//	//printf("C: ");for(long long i = 0; i < lc; i++) printf("%d ",C[i]);putchar('\n');
//
//	delete []B;
//}
//
//// Merge sort
//void mergeSort(long long *ori,  long long lo, long long hi)
//{
//	if(hi - lo < 2)
//		return;
//	long long mi = (lo + hi) >> 1;
//	//cout << "lo, hi, mi: " << lo <<" "<< hi <<" " << mi << endl;
//	mergeSort(ori,lo,mi);
//	mergeSort(ori,mi,hi);
//	merge(ori,lo,hi,mi);
//
//}
//
//
//// Merge part for Merge Sort
//void merge(long long *A, long long *D, long long lo, long long hi, long long mi)
//{
//	//printf("lo: %d, mi: %d, hi: %d\n",lo,mi,hi);
//	//cout << "lo, hi, mi: " << lo <<" "<< hi <<" " << mi << endl;
//	long long lb = mi - lo;
//	long long *B = new long long[lb];
//	long long *BD = new long long[lb];
//	for (long long i = lo; i < mi; B[i - lo] = A[i++]);
//	for (long long i = lo; i < mi; BD[i - lo] = D[i++]);
//	long long *C = &A[0] + mi;
//	long long *CD = &D[0] + mi;
//	long long lc = hi - mi;
//
//	//printf("lb: %d, lc: %d\n",lb,lc);
//
//	//printf("A: ");for(int i = lo; i < hi; i++) printf("%d ",A[i]); putchar('\n');
//	//printf("B: ");for(int i = 0; i < lb; i++) printf("%d ",B[i]);putchar('\n');
//	//printf("C: ");for(int i = 0; i < lc; i++) printf("%d ",C[i]);putchar('\n');
//	//printf("D: ");for(int i = lo; i < hi; i++) printf("%d ",D[i]); putchar('\n');
//	//printf("BD: ");for(int i = 0; i < lb; i++) printf("%d ",BD[i]);putchar('\n');
//	//printf("CD: ");for(int i = 0; i < lc; i++) printf("%d ",CD[i]);putchar('\n');
//
//	for(int i = lo, j = 0, k = 0; j < lb;)
//	{
//		//printf("i: %d, j: %d, k: %d\n",i,j,k);
//		if((k < lc)&&(C[k] < B[j]))
//		{
//			A[i++] = C[k++];
//			D[i++] = CD[k++];
//		}
//		if((lc <= k)||(B[j]<=C[k]))
//		{
//			A[i++] = B[j++];
//			D[i++] = BD[j++];
//		}
//
//	}
//
//	//printf("A: ");for(int i = lo; i < hi; i++) printf("%d ",A[i]); putchar('\n');
//	//printf("B: ");for(int i = 0; i < lb; i++) printf("%d ",B[i]);putchar('\n');
//	//printf("C: ");for(int i = 0; i < lc; i++) printf("%d ",C[i]);putchar('\n');
//	//printf("D: ");for(int i = lo; i < hi; i++) printf("%d ",D[i]); putchar('\n');
//	//printf("BD: ");for(int i = 0; i < lb; i++) printf("%d ",BD[i]);putchar('\n');
//	//printf("CD: ");for(int i = 0; i < lc; i++) printf("%d ",CD[i]);putchar('\n');
//
//	delete []B;delete []BD;
//}
//
//// Merge sort
//void mergeSort(long long *ori, long long *cpy,  long long lo, long long hi)
//{
//	
//	if(hi - lo < 2)
//		return;
//	int mi = (lo + hi) >> 1;
//	mergeSort(ori,cpy,lo,mi);
//	mergeSort(ori,cpy,mi,hi);
//	//cout << "lo, hi, mi: " << lo <<" "<< hi <<" " << mi << endl;
//	merge(ori,cpy,lo,hi,mi);
//
//}
//
//int main()
//{
//	int num;
//	scanf("%d",&num);
//
//	long long *x = (long long*)calloc(num,sizeof(long long));
//	long long *y = (long long*)calloc(num,sizeof(long long));
//	long long *xOrder_x = (long long*)calloc(num,sizeof(long long));
//	long long *xOrder_y = (long long*)calloc(num,sizeof(long long));
//
//	for (int i = 0; i < num; i++)
//	{
//		scanf("%d %d",&xOrder_x[i],&xOrder_y[i]);
//	}
//
//
//	mergeSort(xOrder_x, xOrder_y, 0, num);
//	mergeSort(xOrder_y, 0, num);
//	printf("Inversion: %d\n",inversion);
//
//	//cout << "x\ty" << endl;
//	//for (int i = 0; i < num; i++) cout << x[i] <<"\t"<< y[i] << endl;
//	//cout << "After sorted:" << endl;
//	//cout << "x\ty" << endl;
//
//
//	printf("%d\n",num*(num-1)/2-inversion);
//
//	return 0;
//
//}