#include <stdio.h>
#include <stdlib.h>

void *amemcpy(void *dest, const void *src,int n) {
	char *pDest = dest;
	const char *pSrc = src;

	for (int i = 0; i< n; i++) {
		pDest[i] = pSrc[i];
	}

	return dest;
}

