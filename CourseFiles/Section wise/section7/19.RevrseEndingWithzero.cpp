/* ***********
Reverse a number ending with zero.
if a number is ending with 0 and you want 0 also then,
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
cout<<reverse;
*/
