#ifndef TTY_LIB2_H
#define TTY_LIB2_H

// C library headers
#include <stdio.h>
#include <string.h>

// Linux headers
#include <fcntl.h> // Contains file controls like O_RDWR
#include <errno.h> // Error integer and strerror() function
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()


//#define BAUD_RATE   B9600         //in/out baud rate B0,  B50,  B75,  B110,  B134,  B150,  B200, B300, B600, B1200, B1800, B2400, B4800, B9600, B19200, B38400, B57600, B115200, B230400, B460800

void config_tty (const char *tty_port, struct termios *tty, unsigned int baud, int *serial_port);

//const char *SERIAL_PORT = "/dev/ttyS0";  //serial port

//inline const char 


#endif