#include <stdio.h>

void nrpira( int );

int main ( void ) {
	int n;
	printf( "단수>> ");
	scanf( "%d", &n );

	nrpira( n );

	return 0;
}

void nrpira( int n ) {

	int i, j;
	for( i = n; i >= 0; i-- ) {
		for( j = n; j >= i - 1 ; j-- ) {
			printf( " " );
		}
		for( j = 1; j <= i * 2 + 1; j++ ) {
			printf( "%d", i + 1 );		
		}
		printf( " \n" );
	}
}
