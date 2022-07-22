/*
FIRST INDEX
Sample Input :
4
9 8 10 8
8
Sample Output :
1
*/

int firstIndex(int input[], int size, int x) {
  
   if (size <= 0)
        return -1;
    if (input[0] == x)
        return 0;
    int res = firstIndex(input + 1, size- 1, x);
    if (res < 0)
        return res;
    else
        return res + 1;
}

