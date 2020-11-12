#include <stdio.h>

void putAdditionTable( void );

int main( void ) {

	putAdditionTable();
	return 0;
}

void putAdditionTable( void ) {
	int i, j;
	printf( "   | " );
	for( i = 1; i < 10; i++ ) {
		printf( "%2d ", i );
	}
	printf( "\n---+----------------------------\n" );

	for( i = 1; i < 10; i++ ) {
		printf( "%2d | ", i );
		for( j = 1; j < 10; j++ ) {
			printf( "%2d ", j + i );
		}	
		printf( "\n" );
	}
}
