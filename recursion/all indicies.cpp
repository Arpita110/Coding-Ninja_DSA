/*
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
*/

int allIndexes(int input[], int size, int x, int output[]) {
  
if(size==0)
    return 0;
    int ptr= allIndexes(input,size-1,x,output);
    if(input[size-1]==x)
    {
        output[ptr]=size-1;
        return ptr+1;
    }
    return ptr;
}

