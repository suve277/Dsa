//Search an element in an array using C

int search(int arr[], int N, int X)
{ int flag=0, i;

 for(i=0; i<N; i++){
    if(arr[i]==X)
    { return i; }
 }
   
        return -1;
        
}