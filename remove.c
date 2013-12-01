#include <stdio.h>
#include <stdlib.h>

int estado;

int main(int argc, char* argv[])
{
	estado = remove(argv[1]);
	
	if(estado == 0)
		printf("El archivo se ha eliminado correctamente\n \n");
	
	else
	{
		printf("El archivo no se pudo eliminar\n \n");
		return -1;
	}

	return 0;

}
