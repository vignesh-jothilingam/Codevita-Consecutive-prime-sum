#include<iostream>

using namespace std;

int main()
  {

      int n;
      std::cin>>n;
      int count,i,j;
      int prime_sum_count=0;
      int sum=2;
      for(i=3;i<=n;i++)
      {
          count=0;
          for(j=1;j<=n;j++)
          {
              if(i%j==0){count++;}
          }
          if(count==2)
          {
              sum=sum+i;
              count=0;
              for(i=1;i<=sum;i++)
              {
                  if(sum%i==0){count++;}
              }
              if(count==2){prime_sum_count++;}
          }
      }
        std::cout<<endl<<prime_sum_count;
      return 0;
  }
