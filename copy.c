#include <stdio.h>
#include <stdlib.h>

FILE *archivo, *copia;
char c;

int main (int argc, char* argv[])
{
	archivo = fopen(argv[1], "r");
	if(archivo == NULL)
	{
		printf("Presiona cualquier tecla para salir\n");
		return -1;
	}
	copia = fopen(argv[2], "w");
	if(copia == NULL)
	{
		fclose(archivo);
		printf("Presiona cualquier tecla para salir\n");
		return -1;
	}
	
	while((c=fgetc(archivo))!=EOF)
		fputc(c, copia);

	fclose(archivo);
	fclose(copia);
	
	return 0;

}
