#ifndef RP2X_SERIAL_H
#define RP2X_SERIAL_H

typedef unsigned uint;

enum {
	RP2X_SERIAL_OPEN_FAILURE = -1,
	RP2X_SERIAL_BAUD_INVALID = -2,
	RP2X_SERIAL_ATTR_FAILURE = -3
};

int rp2x_serial_open(char *dev, int vtime, int vmin, uint baud);

#endif // RP2X_SERIAL_H
