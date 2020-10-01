#include <stdio.h>

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b%a, a);
}

int findGcd(int a[], int n)
{
    int result = a[0];
    for(int i=1; i<n; i++)
    {
        if(result < a[i])
            result = gcd(result, a[i]);
        else
            result = gcd(a[i], result);
        if(result ==  1){
            return 1;
        }
    }
    return result;
}

int main(void) {
	// your code goes here
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++)
	    scanf("%d", &a[i]);
    printf("%d\n",findGcd(a, n));
	return 0;
}

