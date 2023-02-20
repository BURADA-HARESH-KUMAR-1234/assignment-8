#include <stdio.h>

int main()
{
  int n,i=1,hp,s;
  scanf("%d",&n);
  scanf("%d",&hp);
  while(i<n)
  {
    scanf("%d",&s);
    if(hp>s)
    hp=s;
    i++;
  }
  printf("lowest is %d",hp);
  return 0;
}

#include<stdio.h>  
int main()
{    
  int n,i=2; 
  scanf("%d",&n);        
  while(i<=n/2)   
  {    
    if(n%i==0)     
    printf("NOT PRIME");
    else 
    printf("PRIME");
    i++;   
    return 0; 
  }
}
  
#include<stdio.h>

int main()
{
  int n,i=1,hp=0,s,num=0;
  scanf("%d",&n);
  while(i<n)
  {
    scanf("%d",&s);
    if(s>hp)
    {
      num=hp;
      hp=s;
    }
    if(s>num && s<hp)
    num=hp;
    i++;
   }
   printf("the second highest is %d",hp);
   return 0;
}
      
 