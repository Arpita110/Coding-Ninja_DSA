/*Count Zeros
Sample Input 1 :
0
Sample Output 1 :
1
*/
int countZeros(int n) {
    
   if(n  == 0)
        return 1;
    if(n<10)
        return 0;
    else 
        if(n%10==0)
        return 1+ countZeros(n/ 10);
    else
        return countZeros(n/ 10);
}



