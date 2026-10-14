#include <stdio.h>
int main(){
long long n;
int count =0;
printf("Enter a number:");
scanf("%||d",&n);
if(n==0){
count=1;
}else{
if(n<0)n=-n;//Negative number handle)
while(n>0){
n/=10;
count++;
}
}
printf("Total digits =%d\n",count);
return 0;
}
