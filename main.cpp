#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b;
    for(int i = 1; ;i++){
        int x = i*i;
        if(x < 1000) continue;
        if(x > 9999) break;
        int fro = x / 100;
        int bac = x % 100;
        if(fro/10 == fro%10 && bac/10 == bac%10)
            printf("%d\n",x);
    }
    return 0;
}
