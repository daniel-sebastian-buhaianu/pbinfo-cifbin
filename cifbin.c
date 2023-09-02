#include <stdio.h>

int main()
{
	unsigned n, z = 0, u = 0; char r;

	scanf("%u", &n);
	
	while (n) { (n % 2) ? u++ : z++; n /= 2; }

	printf("%u %u", z, u);

	return 0;
}
// scor 100
