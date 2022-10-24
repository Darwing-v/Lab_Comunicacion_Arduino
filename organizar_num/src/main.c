#include"lib1.h"
#include"lib_gr6.h"

int main(int argc, char* argv[])
{
	clock_t tiempo_inicio, tiempo_fin;
	double tiempo_usado = 0;

	unsigned int len;
	char *dir_b;

	dir_b = read_file_to_buffer ( argv[2] , &len); //len = longitud del string que retorna 
	
	//archivo ya leido

	tiempo_inicio = clock(); //inicio t_1

	unsigned int tam = def_tam(dir_b, len);

	double arr[tam];

	llenar_arr(dir_b, tam, &arr[0]);	

	tiempo_fin = clock(); //fin t_1

	tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;

	printf("\n\n\t\tEl tiempo 1 es: %f\n", tiempo_usado);  //Imprimir primer tiempo

	int select = atoi(argv[1]);

	if (select == 1)
	{
		tiempo_inicio = clock(); //inicio t_2

		insertion_sort(&arr[0], tam);

		tiempo_fin = clock(); //fin t_2

	}
	else
	{
		tiempo_inicio = clock(); //inicio t_2

		bubble_sort(&arr[0], tam);

		tiempo_fin = clock(); //fin t_2

	}
	tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;

	printf("\n\t\tEl tiempo 2 es: %f\n", tiempo_usado);  //Imprimir segundo tiempo

	tiempo_inicio = clock(); //inicio t_3

	write_dArray_to_file (arr, tam, argv[3]);

	tiempo_fin = clock(); //fin t_3

	tiempo_usado = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;

	printf("\n\t\tEl tiempo 3 es: %f\n\n", tiempo_usado);  //Imprimir tercer tiempo

	free_buffer_mem(dir_b);
}
