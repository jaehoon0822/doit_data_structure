#include <stdio.h>

void printSquareBox( void );

int main( void ) {

	printSquareBox();
	return 0;
}

void printSquareBox( void ) {
	int i, j, n;
	
	printf( "정수를 입력해주세요.>> " );
	scanf( "%d", &n );	
	
	for( i = 0; i < n; i++ ) {
		for ( j = 0; j < n; j++ ) {
			printf( "*" );	
		}	
		printf( "\n" );
	}
}
