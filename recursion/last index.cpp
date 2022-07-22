/*
Sample Input :
4
9 8 10 8
8
Sample Output :
3
*/

int lastIndex(int input[], int size, int x) {
  
    size--
    if(size<0)
        return -1;
    if(input[size]==x)
        return size;
     return lastIndex(input,size,x);
    

}

