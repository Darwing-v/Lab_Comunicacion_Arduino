#include "lib_gr6.h"
#include "tty_lib2.h"

int main(int argc, char *argv[])
{
	if (argc != 3)//Condicional para la cantidad de argumentos ingresados
    	{
        	printf("\n\nError en la cantidad de argumentos, por favor ingrese 2 argumentos, tiempo de preparacion y tiempo de lectura \n\n");
       	 	exit(1);
   	}

	int time_1, time_2;

	int c_per = 0;
        int cont = 0;

        string name;
        unsigned int identificador;

        time_1 = stoi(argv[1]);
        time_2 = stoi(argv[2]);

        cout << "Ingrese la cantidad de participantes: ";
        cin >> c_per;

        Participante participantes[c_per];

        for (cont = 0; cont < c_per; cont++)
        {
                cout << "Ingrese el nombre del participante "<< cont+1 <<": ";
                cin >> name;
                cout << "Ingrese el ID del participante "<< cont+1 <<": ";
                cin >> identificador;

                Participante persona = Participante(identificador, name);
                participantes[cont] = persona;
        }


        for (cont = 0; cont < c_per; cont++)
        {
                cout << "Jugador " << cont+1 << " preparate para iniciar" << endl;
                unsigned int cant_pulsos = llenar_veces_pushed(time_1, time_2);
                participantes[cont].set_pushed((char)cant_pulsos);
        }

        for (cont = 0; cont < c_per; cont++)
        {
                cout << "\t\tPariticipante " << cont+1 << ":" << endl << endl;
                cout << "\t\tNombre : " << participantes[cont].get_nombre() << endl;
                cout << "\t\tID     : " << participantes[cont].get_id() << endl;
                cout << "\t\tPulsos : " << participantes[cont].get_cant_pulsos() << endl << endl;
	}
	
}



