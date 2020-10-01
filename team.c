#include<stdio.h>
int main()
{
  int i,n,j;
  int a[1001],count=0,X=0,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { for(j=0;j<3;j++)
  	 {
  	 	scanf("%d",&a[j]);
     
  	  if(a[j]==1)
  	   count++;
  	   else 
  	 	count+=0;
     }
     if(count==2||count==3)
      X+=1;
     else if(count==1)
      X+=0;
     count=0;
  }
  printf("%d\n",X);
  return 0;
}




