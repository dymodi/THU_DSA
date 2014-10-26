//#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <stdlib.h>
//#include <stdio.h>
//using namespace std;
//
////Bubble sort 
//void bubble(int *ori,  int n)
//{
//	int i,tmp;
//	int flag = 1;
//
//	while(flag == 1)
//	{
//		flag = 0;
//		for(i=0;i<n-1;i++)
//		{
//			if(ori[i]>ori[i+1])
//			{
//				tmp = ori[i+1];
//				ori[i+1] = ori[i];
//				ori[i] = tmp;
//				flag = 1;
//			}
//		}
//	}
//}
//
//// Merge part for Merge Sort
//void merge(int *A, int lo, int hi, int mi)
//{
//	int lb = mi - lo;
//	int *B = new int[lb];
//	for (int i = lo; i < mi; B[i - lo] = A[i++]);
//	int *C = &A[0] + mi;
//	int lc = hi - mi;
//
//	//printf("A: ");for(int i = lo; i < hi; i++) printf("%d ",A[i]); putchar('\n');
//	//printf("B: ");for(int i = 0; i < lb; i++) printf("%d ",B[i]);putchar('\n');
//	//printf("C: ");for(int i = 0; i < lc; i++) printf("%d ",C[i]);putchar('\n');
//
//	for(int i = lo, j = 0, k = 0; j < lb;)
//	{
//
//		if((k < lc)&&(C[k] < B[j]))
//			A[i++] = C[k++];
//		if((lc <= k)||(B[j]<=C[k]))
//			A[i++] = B[j++];
//
//	}
//
//	//printf("A: ");for(int i = lo; i < hi; i++) printf("%d ",A[i]); putchar('\n');
//	//printf("B: ");for(int i = 0; i < lb; i++) printf("%d ",B[i]);putchar('\n');
//	//printf("C: ");for(int i = 0; i < lc; i++) printf("%d ",C[i]);putchar('\n');
//
//	delete []B;
//}
//
//// Merge sort
//void mergeSort(int *ori,  int lo, int hi)
//{
//	if(hi - lo < 2)
//		return;
//	int mi = (lo + hi) >> 1;
//	//cout << "lo, hi, mi: " << lo <<" "<< hi <<" " << mi << endl;
//	mergeSort(ori,lo,mi);
//	mergeSort(ori,mi,hi);
//	merge(ori,lo,hi,mi);
//
//}
//
////Find the index of the first element bigger or euqal than 'start' in a sorted arr
//int findHat(int *arr, int n, int start)
//{
//	int head = 0;
//	int tail = n;
//	int mid = (head + tail)/2;
//	int hat;
//
//	if(arr[0]>start)
//	{
//		return 0;
//	}
//	if(arr[n-1]<start)
//	{
//		return n;
//	}
//
//	//int flag = 0;
//	for(int i = 0; i<n; i++)
//	{
//		if(arr[mid]==start)
//			return mid;
//		else if(arr[mid]>start)
//		{
//			if(arr[mid-1]<start)
//				return mid;
//			else
//			{
//				tail = mid;
//				mid = (head + tail)/2;
//			}
//		}
//		else
//		{
//			head = mid;
//			mid = (head + tail)/2;
//		}
//	}
//}
//
////Find the index of the last element less or euqal than 'end' in a sorted arr
//int findBoot(int *arr, int n, int end)
//{
//	int head = 0;
//	int tail = n;
//	int mid = (head + tail)/2;
//	int boot;
//
//	if(arr[n-1]<end)
//	{
//		boot = n-1;
//		return boot;
//	}
//	if(arr[0]>end)
//	{
//		boot = -1;
//		return boot;
//	}
//
//	//int flag = 0;
//	for(int i = 0; i<n; i++)
//	{
//		//cout << "Boot mid:" << mid << endl;
//		if(arr[mid]==end)
//			return mid;
//		else if(arr[mid]<end)
//		{
//			if(arr[mid+1]>end)
//				return mid;
//			else
//			{
//				head = mid;
//				mid = (head + tail)/2;
//			}
//		}
//		else
//		{
//			tail = mid;
//			mid = (head + tail)/2;
//		}
//	}
//}
//
//int main()
//{
//	//Range
//	int num,times,count;
//	int *points,*start,*end,*ans;
//	//int 
//	int i,j;
//	int head,tail,mid,hat,boot;
//	int flag = 0;
//
//	cin >> num >> times ;
//	points = (int*)calloc(num,sizeof(int));
//	start = (int*)calloc(times,sizeof(int));
//	end = (int*)calloc(times,sizeof(int));
//	ans = (int*)calloc(times,sizeof(int));
//
//	getchar();
//	char c;
//	int d;
//	for(i=0;i<num;i++)
//	{
//		//cin >> points[i];
//		scanf("%d",&points[i]);
//		//c = getchar();
//		//d = 0;
//		//while((c!=' ')&&(c!='\n'))
//		//{
//		//	d = d * 10 + (int)(c-'0');
//		//	c = getchar();
//		//}
//		//points[i] = d;
//	}
//
//	//for(i=0;i<num;i++)
//	//{
//	//	cout << points[i];
//	//}
//
//	for(i=0;i<times;i++)
//	{
//		//cin >> start[i];
//		//cin >> end[i];
//		scanf("%d %d",&start[i], &end[i]);
//		
//		//c = getchar();
//		//d = 0;
//		//while((c!=' ')&&(c!='\n'))
//		//{
//		//	d = d * 10 + (int)(c-'0');
//		//	c = getchar();
//		//}
//		//start[i] = d;
//
//		//c = getchar();
//		//d = 0;
//		//while((c!=' ')&&(c!='\n'))
//		//{
//		//	d = d * 10 + (int)(c-'0');
//		//	c = getchar();
//		//}
//		//end[i] = d;
//
//	}
//
//
//	//bubble(points,  num);
//	mergeSort(points, 0, num);
//
//	//for(i=0;i<num;i++) printf("%d ",points[i]);putchar('\n');
//
//	for(i=0;i<times;i++)
//	{
//		hat = findHat(points, num, start[i]);
//		boot = findBoot(points, num, end[i]);
//		//cout << "Hat:" << hat << " Boot:" << boot << endl;
//		//if((points[hat]==start[i])||(points[boot]==end[i]))
//		count = boot - hat + 1;
//		//else if((points[hat]==start[i])||(points[boot]==end[i]))
//		//	count = boot - hat;
//		//else
//		//	count = boot - hat - 1;
//		printf("%d\n",count);
//		
//	}
//
//
//
//
//	//for(i=0;i<times;i++)
//	//{
//	//	if((start[i]>points[num-1])||(end[i]<points[0]))
//	//	{
//	//		cout << 0 << endl;
//	//		continue;
//	//	}
//	//	if((start[i]==points[num-1])||(end[i]==points[0]))
//	//	{
//	//		cout << 1 << endl;
//	//		continue;
//	//	}
//
//	//	if(start[i]<points[0])
//	//		hat = -1;
//	//	else if(start[i]<points[1])
//	//		hat = 0;
//	//	else
//	//	{
//	//		flag = 0;
//	//		head = 0;
//	//		tail = num-1;
//	//		mid = num/2;
//	//		while(flag==0)
//	//		{
//	//			if((points[mid]<=start[i])&&(points[mid+1]>start[i]))
//	//			{
//	//				hat = mid;
//	//				flag = 1;
//	//			}
//
//	//			else if(points[mid]<start[i])
//	//			{	
//	//				head = mid;
//	//				mid = (head+tail)/2;
//	//			}
//
//	//			else
//	//			{
//	//				tail = mid;
//	//				mid = (head+tail)/2;
//	//			}
//	//		}
//	//	}
//
//	//	//cout << hat << endl;
//	//	
//	//	if(end[i]>points[num-1])
//	//		boot = num;
//	//	else if(end[i]>points[num-2])
//	//		boot = num-1;
//	//	else
//	//	{
//	//		flag = 0;
//	//		head = 0;
//	//		tail = num-1;
//	//		mid = num/2;
//	//		while(flag==0)
//	//		{
//	//			if((points[mid]>=end[i])&&(points[mid-1]<end[i]))
//	//			{
//	//				boot = mid;
//	//				flag = 1;
//	//			}
//
//	//			else if(points[mid]<end[i])
//	//			{	
//	//				head = mid;
//	//				mid = (head+tail)/2;
//	//			}
//
//	//			else
//	//			{
//	//				tail = mid;
//	//				mid = (head+tail)/2;
//	//			}
//	//		}
//	//	}
//	//	if((points[hat]==start[i])&&(points[boot]==end[i]))
//	//		cout << (boot - hat + 1) << endl;
//	//	else if((points[hat]==start[i])||(points[boot]==end[i]))
//	//		cout << (boot - hat) << endl;
//	//	else
//	//		cout << (boot - hat - 1) << endl;
//
//	//}
//	//cout << hat << endl;
//	//cout << boot << endl;
//
//
//	//for(i=0;i<times;i++)
//	//{
//	//	cout << ans[i]<<endl;
//	//}
//
//	free(points);free(start);free(end);free(ans);
//
//
//
//
//}