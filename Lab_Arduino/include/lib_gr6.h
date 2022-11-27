#ifndef LIB2_GR6_H
#define LIB2_GR6_H

#include <iostream>

using namespace std;

unsigned int llenar_veces_pushed(int t_1, int t_2);

class Participante{
        private:
                string nombre;
                unsigned int identificacion;
                unsigned int cant_pulsador;
        public: 
		Participante ();
                Participante (unsigned int id, string name);

                void set_participant(unsigned int id, string name);
                void set_pushed(unsigned int cant);
                unsigned int get_id();
                string get_nombre();
                unsigned int get_cant_pulsos();
};

#endif