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
	for( i = 0; i < n; i++ ) {
		for( j = 1; j <= n - i ; j++ ) {
			printf( " " );
		}
		for( j = 1; j <= i * 2 + 1; j++ ) {
			printf( "*" );		
		}
		printf( " \n" );
	}
}
