/*
Print Numbers
Sample Input 1 :
 6
Sample Output 1 :
1 2 3 4 5 6

*/
void print(int n){
   if (n <= 0) {
        return;
    }
 
    print(n - 1);
    cout << n << " ";
}

