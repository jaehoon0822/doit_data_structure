#include <stdio.h>

void putMulitplicationTable( void ) {
	int i, j, k;

	printf( "   | " );
		for( k = 1; k < 10; k++ ) {
			printf( "%2d  ", k );	
		}
	printf( "\n" );
	printf( "---+------------------------------------\n" );

	for( i = 1; i < 10; i++ ) {
		printf( "%2d |", i );
		for( j = 1; j < 10; j++ ) {
			printf( " %2d ", j * i );
		}
		printf("\n");
	}
	printf( "\n" );
}

int main( void ) {
	putMulitplicationTable();
	return 0;
}
