/*
sum of digit

12345
15
*/
int sumOfDigits(int n) {
    // Write your code here
if(n==0)
{
   return 0;
} 
else 
      return (n%10+ sumOfDigits(n/10));
}



