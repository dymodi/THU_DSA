//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//using namespace std;
//
//
//long long order = 0;
//long long inversion = 0;
//
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
//// Merge part for Merge Sort
//void merge(long long *A, long long *D, long long lo, long long hi, long long mi)
//{
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
//	//printf("A: ");for(long long i = lo; i < hi; i++) printf("%d ",A[i]); putchar('\n');
//	//printf("B: ");for(long long i = 0; i < lb; i++) printf("%d ",B[i]);putchar('\n');
//	//printf("C: ");for(long long i = 0; i < lc; i++) printf("%d ",C[i]);putchar('\n');
//	//printf("D: ");for(long long i = lo; i < hi; i++) printf("%d ",D[i]); putchar('\n');
//	//printf("BD: ");for(long long i = 0; i < lb; i++) printf("%d ",BD[i]);putchar('\n');
//	//printf("CD: ");for(long long i = 0; i < lc; i++) printf("%d ",CD[i]);putchar('\n');
//
//	for(int i = lo, j = 0, k = 0; j < lb;)
//	{
//		if((k < lc)&&(C[k] < B[j]))
//		{
//			A[i] = C[k];
//			D[i++] = CD[k++];
//		}
//		if((lc <= k)||(B[j]<=C[k]))
//		{
//			A[i] = B[j];
//			D[i++] = BD[j++];
//		}
//
//	}
//
//	//printf("A: ");for(long long i = lo; i < hi; i++) printf("%d ",A[i]); putchar('\n');
//	//printf("B: ");for(long long i = 0; i < lb; i++) printf("%d ",B[i]);putchar('\n');
//	//printf("C: ");for(long long i = 0; i < lc; i++) printf("%d ",C[i]);putchar('\n');
//	//printf("D: ");for(long long i = lo; i < hi; i++) printf("%d ",D[i]); putchar('\n');
//	//printf("BD: ");for(long long i = 0; i < lb; i++) printf("%d ",BD[i]);putchar('\n');
//	//printf("CD: ");for(long long i = 0; i < lc; i++) printf("%d ",CD[i]);putchar('\n');
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
//	long long mi = (lo + hi) >> 1;
//	mergeSort(ori,cpy,lo,mi);
//	mergeSort(ori,cpy,mi,hi);
//	//cout << "lo, hi, mi: " << lo <<" "<< hi <<" " << mi << endl;
//	merge(ori,cpy,lo,hi,mi);
//
//}
//
//
//int main()
//{
//	long long num;
//	scanf("%lld",&num);
//	//printf("num: %lld\n",num);
//
//	//long long *x = (long long*)calloc(num,sizeof(long long));
//	//long long *y = (long long*)calloc(num,sizeof(long long));
//	long long *xOrder_x = (long long*)calloc(num,sizeof(long long));
//	long long *xOrder_y = (long long*)calloc(num,sizeof(long long));
//
//	for (long long i = 0; i < num; i++)
//	{
//		scanf("%lld %lld",&xOrder_x[i],&xOrder_y[i]);
//	}
//
//	//for (long long i = 0; i < num; i++)
//	//{
//	//	//printf("%d %d\n",x[i],y[i]);
//	//	printf("%d\n",x[i]);
//	//	printf("%d\n",y[i]);
//	//}
//
//	//memcpy(xOrder_x,x,num*sizeof(long long));
//	//memcpy(xOrder_y,y,num*sizeof(long long));
//
//	//bubble(xOrder_x, xOrder_y, num);
//	mergeSort(xOrder_x, xOrder_y, 0, num);
//
//	mergeSort(xOrder_y, 0, num);
//
//	//printf("Order: %d\n",order);
//	//printf("Inversion: %lld\n",inversion);
//
//	//cout << "x\ty" << endl;
//	//for (long long i = 0; i < num; i++) cout << x[i] <<"\t"<< y[i] << endl;
//	//cout << "After sorted:" << endl;
//	//cout << "x\ty" << endl;
//	//for (long long i = 0; i < num; i++) cout << xOrder_x[i] <<"\t"<< xOrder_y[i] << endl;
//
//	printf("%lld\n",num*(num-1)/2-inversion);
//
//	return 0;
//
//}