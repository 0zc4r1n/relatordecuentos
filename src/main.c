/**
 * Relator de cuentos para consola
 * App que va relatando un cuento en formato txt por consola.
 * App de pruebas para POC con Docker
 *
 * @0zc4r1n 2020
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define LARGO_RUTA_CUENTO 255
#define LARGO_LINEA 255
#define SEPARADOR "<:>"
#define RUTA_CUENTO "./cuento.txt"

int recorre_cuento( FILE *cuento );

int main( int args, char **argv )
{
	FILE *cuento = NULL;
	char archivo_cuento[ LARGO_RUTA_CUENTO ];

	if( args == 2 )
		sprintf( archivo_cuento, "%s", argv[1] );
	else
		sprintf( archivo_cuento, "%s", RUTA_CUENTO );

	printf( "%sCUENTO CARGADO [%s]%s\n\n", KBLU, archivo_cuento, KNRM );	

	cuento = fopen( archivo_cuento, "r" );

	if( cuento == NULL )
	{
		fprintf( stderr, "%sNo existe cuento para leer%s\n", KRED, KNRM );
		fprintf( stderr, "%sCuento por defecto es cuento.txt%s\n", KRED, KNRM );

		return 1;
	}	

	recorre_cuento( cuento );

	fclose( cuento );

	return 0;
}


int recorre_cuento( FILE *cuento )
{
	char linea_cuento[ LARGO_LINEA + 1 ];
	char *linea = NULL;
	char *token = NULL;
	int contador = 0;
	int contador_linea = 0;

	while( !feof( cuento ) )
	{
		fgets( linea_cuento, LARGO_LINEA, cuento );

		linea = strtok( linea_cuento, "\n" );

		if( linea != NULL )
		{
			token = strtok( linea_cuento, SEPARADOR );
			
			contador = 0;

			while( token != NULL )
			{
				if( !contador )
				{
					if( contador_linea % 2 == 0 )
						printf( "%s<<%s>>%s\n", KGRN, token, KNRM );
					else
						printf( "%s<<%s>>%s\n", KMAG, token, KNRM );
				}
				else
					printf( "%s\"%s\"\n%s", KYEL, token, KNRM );

				token = strtok( NULL, SEPARADOR );
			
				contador++;
			}

			getchar();
			contador_linea++;
		}
	}

	return 0;
}
