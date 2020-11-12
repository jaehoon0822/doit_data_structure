#include <stdio.h>

void triangleLB( int n );
void triangleLU( int );
void triangleRU( int );
void triangleRB( int );

int main( void ) {

	int n;

	printf( "단수>> " );
	scanf( "%d", &n );
	
	triangleLB( n );
	triangleLU( n );
	triangleRU( n );
	triangleRB( n );

	return 0;
}

void triangleLU( int n ) {
	int i, j;
	for ( i = n; i >= 1; i-- ) {
		for ( j = 1; j <= i; j++ ) {
			printf( "*" );	
		}	
		printf( "\n" );	
	}
}

void triangleRU( int n ) {
	int i, j;
	for ( i = n; i >= 1; i-- ) {
		for ( j = n; j > i - 1; j-- ) {
			printf( " " );
		}	
		for ( j = 1; j <= i; j++ ) {
			printf( "*" );
		}
		printf( "\n" );
	}
}

void triangleRB( int n ) {
	int i, j;
	for( i = 1; i <= n; i++ ) {
		for( j = n; j > i; j-- ) {
			printf( " " );	
		}	
		for( j = 1; j <= i; j++ ) {
			printf( "*" );	
		}
		printf( "\n" );
	}
}

void triangleLB( int n ) {
	int i, j;	

	for( i = 1; i <= n; i++ ) {
		for( j = 1; j <= i; j++ ) {
			printf( "*" );	
		}	
		printf( "\n" );
	}
}
