//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <cmath>
//#include <stdlib.h>
//#include <stdio.h>
//using namespace std;
//
//string reduction(string s)
//{
//	int size = s.size();
//	if (size < 3)
//		return s;
//	
//	int i = 2;
//	while(i<size)
//	{
//		if((s[i-2]==s[i-1])&&(s[i-1]==s[i]))
//		{
//			int j = i;
//			while((j + 1)<size)
//			{
//				j = j + 1;
//				if(s[j-1]!=s[j])
//					break;
//			}
//			int count;
//			if (i==j)
//				count = 3;
//			else if (s[j-1] == s[j])
//				count = j - i + 3;
//			else 
//				count = j - i + 2;
//			s = s.erase(i-2,count);
//			size = s.size();
//			if(size < 3)
//				return s;
//			i = i - 2;
//			if(i<2)
//				i = 2;
//		}
//		else
//			i++;
//	}
//	return s;
//}
//
//int main()
//{
//
//int oper;
//string zu;
//
//getline(cin,zu);
//int size = zu.size();
//
//cin >> oper;
////oper = (int)(getchar() - '0');
//
////cout << oper << endl;
//
//
//int *posi;
//char *ball;
//posi = (int*)calloc(oper,sizeof(int));
//ball = (char*)calloc(oper,sizeof(char));
//
//
//for (int i = 0; i < oper; i++)
//{
//	cin >> posi[i];
//	cin >> ball[i];
//	//scanf("%d ",&posi[i]);
//	//scanf("%c",&ball[i]);
//}
//
////for (int i = 0; i < oper; i++)
////{
////	cout << posi[i] << ball[i] << endl;
////}
//
//for (int i = 0; i < oper; i++)
//{
//	zu.insert(posi[i],1,ball[i]);
//	zu = reduction(zu);
//	if (zu == "")
//		cout << '-' << endl;
//	else
//		cout << zu << endl;
//}
//
//
//}