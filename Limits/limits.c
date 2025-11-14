#include <stdio.h>
#include <limits.h>
#include <float.h>

#define NAME(var) #var

int main() {

	printf("CHAR_BIT = %d\n"
			"SCHAR_MAX = %d\n"
			"CHAR_MIX = %d\n"
			"INT_MAX = %d\n"
			"INT_MIN = %d\n"
			"LONG_MAX = %ld\n"
			"LONG_MIN = %ld\n"
			"SCHAR_MAX = %d\n"
			"SCHAR_MIN = %d\n"
			"SHRT_MAX = %d\n"
			"SHRT_MIN = %d\n"
			"UCHAR_MAX = %d\n"
			"UINT_MAX = %d\n"
			"ULONG_MAX = %ld\n"
			"USHRT_MAX = %d\n"
			"FLT_MAX = %f\n"
			"DBL_MAX = %f\n",\
		   	CHAR_BIT,\
		   	SCHAR_MAX,\
		   	CHAR_MIN,\
		   	INT_MAX,\
		   	INT_MIN,\
		   	LONG_MAX,\
		   	LONG_MIN,\
		   	SCHAR_MAX,\
			SCHAR_MIN,\
		   	SHRT_MAX,\
		   	SHRT_MIN,\
		   	UCHAR_MAX,\
		   	UINT_MAX,\
		   	ULONG_MAX,\
		   	USHRT_MAX,\
			FLT_MAX,\
			DBL_MAX\
			);

	printf("char: %zu bits\n", sizeof(char) * 8);
    printf("short: %zu bits\n", sizeof(short) * 8);
    printf("int: %zu bits\n", sizeof(int) * 8);
    printf("long: %zu bits\n\n", sizeof(long) * 8);

    printf("Unsigned char range: 0 to %u\n", (unsigned char)~0);
    printf("Signed char range: %d to %d\n",
           -(char)((unsigned char)~0 >> 1) - 1,
            (char)((unsigned char)~0 >> 1));

    printf("Unsigned short range: 0 to %u\n", (unsigned short)~0);
    printf("Signed short range: %d to %d\n",
           -(short)((unsigned short)~0 >> 1) - 1,
            (short)((unsigned short)~0 >> 1));

    printf("Unsigned int range: 0 to %u\n", (unsigned int)~0);
    printf("Signed int range: %d to %d\n",
           -(int)((unsigned int)~0 >> 1) - 1,
            (int)((unsigned int)~0 >> 1));

    printf("Unsigned long range: 0 to %lu\n", (unsigned long)~0);
    printf("Signed long range: %ld to %ld\n",
           -(long)((unsigned long)~0 >> 1) - 1,
            (long)((unsigned long)~0 >> 1));
	
	return 0;
}

