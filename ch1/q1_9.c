#include <stdio.h>

float sumof( int a, int b ) {
	int diff, min, max = a;
	if( b > max ) { 
		max = b; 
		min = a;
	} else {
		min = b;
	}
	diff = max - min + 1; // 차이나는 값에 자기 자신의 수를 포함
	int result = ( max + min ) * diff; // 두 값을 더하고 diff 를 곱셈
	return result / 2; // 그리고 2를 나누면, 해당 값들의 덧셈을 만듬
}

int main( void ) {
	int a, b;
	printf( "a 값: ");
	scanf( "%d", &a );
	printf( "b 값: ");
	scanf( "%d", &b );

	printf( "%d\n", ( int ) sumof( a, b ) );

	return 0;
}
