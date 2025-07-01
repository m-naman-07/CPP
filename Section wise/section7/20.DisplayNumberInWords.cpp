/*
Display a number in words.
if a number is ending with 0 and you want to display in words then,
Example : n=2500
You have to store the reverse number in a string 
char reverse[10];
int r,i=0;
while(n>0)
{
 r=n%10;
 reverse[i]=r+’0’; // ‘0’ is added to make a digit as character.
 n=n/10;
} 
reverse[i]=‘\0’;
for(int i=0;reverse[i]!=‘\0’;i++)
{
 switch(reverse[i]-‘0’)
 {
 case 0: cout<<“Zero “;
 break;
 case 1: cout<<“One “;
 break;
 case 2: cout<<“Two “;
 break;
 .
 .
 .
 }
} 
*/
