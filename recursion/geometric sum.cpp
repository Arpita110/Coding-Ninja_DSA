/*
geometric sum 
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
*/

double geometricSum(int k) {
    // Write your code here
    if(k==0)
        return 1;
   double ans = 1 / pow(2, k) + geometricSum(k- 1);
 
    return ans;
}


