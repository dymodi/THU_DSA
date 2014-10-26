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
//	int n, m, a, id, onWork, ans;
//	onWork = 0; ans = 0;
//	int *code, *work, *workPlace;
//	char c;
//
//	scanf("%d %d",&n, &m);
//	code = (int*)calloc(n,sizeof(int));
//	work = (int*)calloc(n,sizeof(int));
//	workPlace = (int*)calloc(n,sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		code[i] = -1;
//		work[i] = -1;
//		workPlace[i] = -1;
//	}
//
//	//printf("n: %d\t m: %d\n",n, m);
//	
//	getchar();
//	c = getchar();
//	//scanf("%c",&c);
//	for (int iout = 0; iout < m - 1; iout++) {
//		//printf("c is: %c\n",c);
//
//		if (c == 'I') {
//			getchar();
//			scanf("%d",&a);
//			getchar();
//			scanf("%d",&id);
//			getchar();
//			code[a-1] = id;
//			work[onWork] = a-1;
//			workPlace[a-1] = onWork;
//			onWork++;
//		}
//		if (c == 'O') {
//			getchar();
//			scanf("%d",&a);
//			getchar();
//			onWork--;
//			if (workPlace[a-1] == -1);
//			else if (workPlace[a-1] == onWork) {
//				workPlace[a-1] = -1;
//				work[onWork] = -1;
//			}
//			else {
//				work[workPlace[a-1]] = work[onWork];
//				workPlace[a-1] = -1;
//				work[onWork] = -1;
//			}
//			code[a-1] = -1;
//		}
//
//		if (c == 'Q') {
//			getchar();
//			scanf("%d",&a);
//			getchar();
//			ans += code[a-1];
//		}
//
//		if (c == 'C') {
//			getchar();
//			for (int i = 0; i < onWork; i++) {
//				code[work[i]] = -1;
//				workPlace[work[i]] = -1;
//				work[i] = -1;
//			}
//			onWork = 0;
//		}
//		if (c == 'N') {
//			getchar();
//			ans += onWork;
//		}
//		
//		//printf("ans is:%d\n",ans);
//		//printf("iout is:%d\n",iout);
//		//getchar();
//		//c = getchar();
//		c = getchar();
//		
//	}
//
//
//	if (c == 'I') {
//		getchar();
//		scanf("%d",&a);
//		getchar();
//		scanf("%d",&id);
//		getchar();
//		code[a-1] = id;
//		work[onWork] = a-1;
//		workPlace[a-1] = onWork;
//		onWork++;
//	}
//	if (c == 'O') {
//		getchar();
//		scanf("%d",&a);
//		getchar();
//		onWork--;
//		if (workPlace[a-1] == -1);
//		else if (workPlace[a-1] == onWork) {
//			workPlace[a-1] = -1;
//			work[onWork] = -1;
//		}
//		else {
//			work[workPlace[a-1]] = work[onWork];
//			workPlace[a-1] = -1;
//			work[onWork] = -1;
//		}
//		code[a-1] = -1;
//	}
//
//	if (c == 'Q') {
//		getchar();
//		scanf("%d",&a);
//		getchar();
//		ans += code[a-1];
//	}
//
//	if (c == 'C') {
//		getchar();
//		for (int i = 0; i < onWork; i++) {
//			code[work[i]] = -1;
//			workPlace[work[i]] = -1;
//			work[i] = -1;
//		}
//		onWork = 0;
//	}
//	if (c == 'N') {
//		getchar();
//		ans += onWork;
//	}
//
//	printf("%d",ans);
//
//	return 0;
//}
