#include<stdio.h> 
#include<stdlib.h> 
#Define Size 4 // DEFINE THE STACK SIZE 
int Top=-1, inp_array[Size]; 
void Push (); 
void Pop (); 
void show (); 
void peek (); // RETURN THE TOP ELEMENT BUT NOT DELETE THE DATA 
int main() 
{ 
 int choice; //ENTER UR CHOICE TO PERFORM OPERATION 
 while(1) 
 { 
 printf("\n\nSTACK OPERATIONS\n"); 
 printf("1.PUSH OPERATION\n2.POP OPERATION\n3.TRAVERSE\n4.PEEK 
OPERATION\n5.End\n"); 
 printf("ENTER THE CHOICE TO PERFORM OPERATIONS:"); 
 scanf("%d",&choice); 
 switch(choice) 
 { 
 case 1: Push(); 
 break; 
 case 2: Pop(); 
 break; 
 case 3: show(); 
 break; 
 case 4:peek(); 
 break; 
 case 5: exit(0); 
 default: printf("SORRY....! PLEASE ENTER VALID CHOICE..!!"); 
 } 
 } 
} 
 
void Push() 
        { 
 int x; 
 if(Top==Size-1) //CHECKINF WHETHER STACK IS FULL OR NOT 
 { 
 printf("STACK IS FULL ..!!\n"); 
 } 
 else 
 { 
 printf("ENTER THE ELEMENT TO PERFORM PUSH(INSERTION) 
OPERATION:\n"); 
 scanf("%d",&x); 
 Top=Top+1; //INCREASING THE VALUE OF TOP 
 inp_array[Top]=x; 
 } 
} 
 
void Pop() 
{ 
 if(Top==-1) 
 { 
 printf("SORRY...!STACK IS EMPTY..\n"); 
 } 
 else 
 { 
 printf("Popped element: %d \n",inp_array[Top]); 
 Top=Top-1; 
 } 
} 
 
void show() 
{ 
 if(Top==-1) 
 { 
 printf("SORRY...!STACK IS EMPTY..\n"); 
 } 
 else 
 { 
 printf("TRAVERSING THE STACK:\n"); 
 for(int i=Top;i>=0;--i) 
 printf("%d\n",inp_array[i]); 
 } 
} 
void peek() 
{
  if(Top==-1) 
 { 
 printf("SORRY...!STACK IS EMPTY..\n"); 
 } 
 else 
 { 
 
 printf("%d IS A PEEK ELEMENT\n",inp_array[Top]); 
 } 
} 
