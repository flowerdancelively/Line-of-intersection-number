
/*3、	计算直线的交点数
问题描述：
  平面上有n条直线，且无三线共点，问这些直线能有多少种不同交点数。
  输入：n（n<=20）
  输出：每个测试实例对应一行输出，从小到大列出所有相交方案，其中每个数为可能的交点数。
  样例输入
  4
  样例输出
  0 3 4 5 6
*/ 
#include<iostream>
using namespace std;
int main()
{
	int sum[21][191]={0};
	int i, j, k,n;
	for (i = 0; i < 21; i++)
		sum[i][0] = 1;
	for (k = 2; k < 20; k++)
		for (i = 1; i < k; i++)
			for (j = 0; j <= (i - 1)*i / 2; j++)
				if (sum[i][j] == 1)
		        	sum[k][(k - i)*i + j] = 1;
	  
	while (i)
	{
		cin >> n;
		if (n>1 && n < 21)
		{
			for (i = 0; i <= n*(n - 1) / 2; i++)
				if (sum[n][i] == 1)
					cout << i << " ";
		}
		else
			break;
       cout << endl;
	}
	  
	return 0;
}

