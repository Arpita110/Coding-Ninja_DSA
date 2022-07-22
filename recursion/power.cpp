/*POWER
Sample Input 1 :
 3 4
Sample Output 1 :
*/


int power(int x, int n) {
  
     if (n > 0)
        return (power(x, n- 1) * x);
    else if (n < 0)
        return (power(x, n + 1) / x);
    else
        return 1;

}

