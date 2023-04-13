//to find if the number enterd is armasstrong or not
#include<stdio.h>
int main(){
long long int number,Rem,sum=0,temp,temp1,i,count=0;//variables 
printf("Enter the number to check\n");
scanf("%d",&number);
temp=number;
temp1=1;
Rem=number;
while(number>0){//to find the number of digit of entered number
    number=number/10;
    count++;
}
number=temp;
for(int j=1;number>0;j++)//evaluation of the number using defination of armasstrong number
{
    Rem=number%10;
    for(int k=0;k<count;k++){
    temp1=temp1*Rem;
    }
    sum=sum+temp1;
    temp1=1;
    number=number/10;
} 
if (temp==sum)// checking the if both the number are equal
{  
printf("%lld is armstrong number\n",temp);
}
else{
    printf("not a armstrong number\n");
}
return 0;
}
