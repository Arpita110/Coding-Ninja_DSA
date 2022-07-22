/*

Multiplication (Recursive)
Sample Input 1 :
3 
5
Sample Output 1 :
15
*/
int multiplyNumbers(int m, int n) {
    // Write your code here
    if(m<n)
        return multiplyNumbers(n,m);
    else
        if(n!=0)
            return (m+multiplyNumbers(m,n-1));
            else return 0;

}

