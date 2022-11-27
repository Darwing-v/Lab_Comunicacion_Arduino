#include "lib_gr6.h"
#include "tty_lib2.h"


Participante::Participante(){
	identificacion = 0;
	cant_pulsador = 0;
}

Participante::Participante(unsigned int id, string name){
	identificacion = id;
	nombre = name;
	cant_pulsador = 0;
}

void Participante::set_participant(unsigned int id, string name){
	identificacion = id;
	nombre = name;
}

void Participante::set_pushed(unsigned int cant){
	cant_pulsador = cant;
}

unsigned int Participante::get_id(){
	return identificacion;		
}

string Participante::get_nombre(){
	return nombre;
}

unsigned int Participante::get_cant_pulsos(){
	return cant_pulsador;	
}


unsigned int llenar_veces_pushed(int t_1, int t_2)
{
	struct termios tty;
	int serial_port;
	unsigned int read_buf;
 	int num_bytes;
	int time1, time2;
	config_tty ("/dev/ttyS0", &tty, B9600, &serial_port);

	time1 = t_1;

	time2 = t_2;

	sleep(2);
	write(serial_port, "s", sizeof(char));
	sleep(time1);

	write(serial_port, "r", sizeof(char));
	sleep(time2);

	//num_bytes = read(serial_port, &read_buf, sizeof(read_buf)); lo tenia de primeras
	
	//printf("\n\n%X\n\n", (char)read_buf);

	write(serial_port, "S", sizeof(char));

	num_bytes = read(serial_port, &read_buf, sizeof(read_buf));

	close(serial_port);

	return read_buf;
}
