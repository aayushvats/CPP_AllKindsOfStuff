#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int startNum,endNum;
    int found=0,count=0;
    cout<<"Enter Number START of Range:  ";
    cin>>startNum;
    cout<<"Enter Number END of Range:  ";
    cin>>endNum;
    for(int i=startNum;i<=endNum;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  count++;
               }
               if(count==0&&i!=1)
               { found++;
                 cout<<"Prime Number -> "<<i<<endl;
                 count=0;
               }
               count=0;
       }

 cout<<"Total Prime Number Between Range "<<startNum<<" to
 "<<endNum<<" = "<<found<<endl;
 return 1;
}