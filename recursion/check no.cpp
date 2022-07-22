/*
Check Number
Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true
*/

bool checkNumber(int input[], int size, int x) {
     size--;
  if(size>=0)
     {
         if(input[size]==x)
             return true;
     
      return checkNumber(input,size,x);
     }
   return false;

}



