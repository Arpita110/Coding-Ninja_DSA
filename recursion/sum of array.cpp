/*
sum of array

Sample Input 1 :
3
9 8 9
Sample Output 1 :
26
*/
int sum(int input[], int n) {
 
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=input[i];
    }
    return sum;

}

