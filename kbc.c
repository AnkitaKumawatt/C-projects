
#include<stdio.h>
int main(){
int que, amount=0;
printf("1. Which planet is known as the red planet? 1.Mars 2.Earth 3.Venus 4.Jupiter\n");
scanf("%d",&que);
if(que==1)
{
amount+=1000;
printf("2. What is the largest ocean in the world? 1.Indian Ocean 2.Pacific Ocean 3.Atlantic Ocean 4.Arctic Ocean\n");
scanf("%d",&que);
if(que==2)
{
amount+=1000;
printf("3. What is the capital of India? 1.Mumbai 2.Ujjain 3.New Delhi 4.Rajasthan\n");
scanf("%d",&que);
if(que==3)
{
amount+=1000;
printf("4. Which festival is known as the Festival of Lights? 1.Holi 2.Diwali 3.Navratri 4.Makarsankranti\n");
scanf("%d",&que);
if(que==2)
{
amount+=1000;
printf("5. Who is known as the Father of Computers? 1.Bill Gates 2.Charles Babbage 3.Steve Jobs 4.Tim Berners-Lee\n");
scanf("%d",&que);
if(que==2)
{
amount+=1000;
printf("6. Which component is often called the brain of the computer? 1.Hard Disk Drive (HDD) 2.Random Access Memory (RAM) 3.Central Processing Unit (CPU) 4.Monitor\n");
scanf("%d",&que);
if(que==3)
{
amount+=1000;
}
else{
printf("Wrong, the answer is 3.Central Processing Unit (CPU)\n");
}
}
else{
printf("Wrong, the answer is 2.Charles Babbage\n");
}
}
else{
printf("Wrong, the answer is 2.Diwali\n");
}
}
else{
printf("wrong, the answer is 3.New Delhi\n");
}
}
else{
printf("Wrong, the answer is 2.Pacific Ocean\n");
}
}
else{
printf("Wrong, the answer is 1.Mars\n");
} 
printf("You won %d",amount);
return 0;
}
