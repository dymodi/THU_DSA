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
//	onWork = 0;									// onWork�������ж������ڹ���
//	ans = 0;									// ans�����մ��Ƕ���						
//	int *code, *work, *workPlace;
//	char c;
//
//	scanf("%d %d",&n, &m);
//	code = (int*)calloc(n,sizeof(int));			// Ա�����
//	work = (int*)calloc(n,sizeof(int));			// �洢�ڵڼ���λ�����Ǽ���Ա���ڹ���
//	workPlace = (int*)calloc(n,sizeof(int));	// �洢����Ա���ڵڼ���λ�ù���
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
//	
//	
//	for (int iout = 0; iout < m ; iout++) {
//		//printf("c is: %c\n",c);
//
//		//c = getchar();
//
//		//scanf("%c",&c);
//		cin >> c;
//
//		if (c == 'I') {
//			//getchar();
//			//scanf("%d",&a);
//			cin >> a;
//			//getchar();
//			//scanf("%d",&id);
//			cin >> id;
//			//getchar();
//			if (code[a-1] == -1) onWork++;
//			code[a-1] = id;
//			work[onWork-1] = a-1;
//			workPlace[a-1] = onWork-1;
//			
//		}
//		if (c == 'O') {
//			//getchar();
//			//scanf("%d",&a);
//			cin >> a;
//			//getchar();
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
//			//getchar();
//			//scanf("%d",&a);
//			cin >> a;
//			//getchar();
//			ans = code[a-1] + ans;
//		}
//
//		if (c == 'C') {
//			//getchar();
//			for (int i = 0; i < onWork; i++) {
//				code[work[i]] = -1;
//				workPlace[work[i]] = -1;
//				work[i] = -1;
//			}
//			onWork = 0;
//		}
//
//		if (c == 'N') {
//			//getchar();
//			ans = onWork + ans;
//		}
//		
//		//printf("ans is:%d\n",ans);
//		//printf("iout is:%d\n",iout);
//		//printf("onWork is:%d\n",onWork);
//		//getchar();
//		//c = getchar();
//		
//	}
//
//	printf("%d",ans);
//
//	return 0;
//}
