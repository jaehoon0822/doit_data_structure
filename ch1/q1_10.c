#include <stdio.h>
int subof( int, int );

int main( void ) {

	int a, b;
	printf( "a result: " );
	scanf( "%d", &a );
	printf( "b result: " );
	scanf( "%d", &b );

	while( b <= a ) {
		printf( "a 보다 큰값을 입력해 주세요.>> " );
		scanf( "%d", &b );
	}

	printf( "subof(%d, %d)= %d\n", a, b, subof( a, b ) );

	return 0;
}

int subof( int a, int b ) {
	return b - a;
}
