/* 11059 Maximum Product Accepted C++ 0.016 2011-01-31 07:34:02 */
#include<stdio.h>
int main(){
	int n;
	int data=1;	
	while(scanf("%d",&n)==1){
		int i,j,count;
		int m[18];
		long long int max,sum;
		for(i=count=0;i<n;i++)
			scanf("%d",&m[i]);		
		max=0;		
		if(n==1)
			if(max<m[0])
				printf("Case #%d: The maximum product is %d.\n",data++,m[0]);
			else
				printf("Case #%d: The maximum product is 0.\n",data++);
		else{
			for(i=0;i<n;i++){
				for(sum=m[i],j=i+1;j<n;j++){					
					if(max<sum)
						max=sum;
					sum*=m[j];}
				if(max<sum)
					max=sum;}
			if(m[n-1]>max)
				max=m[n-1];
		printf("Case #%d: The maximum product is %lld.\n",data++,max);}
		putchar('\n');
		
	}
	return 0;
}
/*

給一個數字集合 { S1,S2, … ,Sn }，請從這個數字集合裡找出一段連續數字，使他們的乘積是最大的。以Case 1為例子，2 x 4 = 8為這個集合的最大乘積；而Case 2則為2 x 5 x (–1) x 2 x (–1) =20。如果你找到的最大乘積小於等於0，則最後答案應輸出0。

Input

每組測試資料開頭為一個正整數 1 ≤ N ≤ 18, 代表這個集合有幾個數字。每個數字 Si 都是範圍 -10 ≤ Si ≤ 10的整數。下一列則為這個集合的N個數字。各組測試資料之間都有一個空白列。請用EOF判斷檔案結束。

Output

每組測試資料印出一列： “Case #M: The maximum product is P.”。其中M代表測資的編號（從1開始計數），而 P代表的則是集合的最大乘積。每組測試資料後面請印出一行空白列。

Sample Input 
 
3
2 4 -3

5
2 5 -1 2 -1

3
-9 -7 -8

2
1 -1

1
-9

Sample Output

Case #1: The maximum product is 8.

Case #2: The maximum product is 20.

Case #3: The maximum product is 63.

Case #4: The maximum product is 1.

Case #5: The maximum product is 0.
 
*/