#include <stdio.h>
#include <stdlib.h>

int sumArray(int anArray[], int l, int r)
{

    int mid, lsum = 0, rsum = 0;
    if (r-l == 0)
    {
        return anArray[l];
    }
    //divide and conquer
    mid = (l+r) / 2;
    lsum = sumArray(anArray, l , mid);
    rsum = sumArray(anArray , mid+1, r);
    if(lsum>rsum)
    {
    return lsum;
    }
    else
    return rsum;
}

int main(void){
  int *test;
  test=malloc(100*sizeof(int));
  int i;
  for(i=0; i<100; i++)
  {
    test[i]=i+1;
  }
    printf("%d\n",sumArray(test,0,100));
  return EXIT_SUCCESS;
}
