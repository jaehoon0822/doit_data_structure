#include <stdio.h>

void printSquareBox( void );

int main( void ) {

	printSquareBox();
	return 0;
	
}

void printSquareBox( void ) {
	int i, j, w, h;
	
	printf( "높이>> " );
	scanf( "%d", &h );	
	printf( "너비>> " );
	scanf( "%d", &w );	
	
	for( i = 0; i < h; i++ ) {
		for ( j = 0; j < w; j++ ) {
			printf( "*" );	
		}	
		printf( "\n" );
	}
}

