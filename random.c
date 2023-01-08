#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

short arr[32768]; 

int main(int argc, const char* argv[])
{
    freopen("datay.txt","w",stdout);
    srand((unsigned)time(NULL));
    const int count = 100*pow(2,16);
    for(int i=0; i<count; ++i ) {
        arr[rand()]++; //0-32767  2**15
    }
    for(int i=0; i< sizeof(arr)/sizeof(arr[0]); i++){
       printf("%d,",i);
    }
    return 0;
}