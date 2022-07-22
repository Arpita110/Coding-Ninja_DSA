/*
COUNT
Sample Input 1 :
 156
Sample Output 1 :
3
*/

int count(int n){
    
   if (n /10==0) {
        return 1;
    }
 else
     return 1+count(n/10);
}

