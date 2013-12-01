#include <stdio.h>
#include <stdlib.h>

FILE *archivo, *copia;
char c;
int estado;

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
	
	estado = remove(argv[1]);
	
	if(estado == 0)
		printf("El archivo se ha movido correctamente\n \n");
	
	else
	{
		printf("El archivo no se pudo mover\n \n");
		return -1;
	}
	
	return 0;

}
