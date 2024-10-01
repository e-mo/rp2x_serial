### RP2X_SERIAL

A single function library for opening a serial port connection with  
a USB connected RP2X (rp2040/rp2350) MCU.  
  
# Interface  
```c
enum {
	RP2X_SERIAL_OPEN_FAILURE = -1, // failed to open serial port
	RP2X_SERIAL_BAUD_INVALID = -2, // failed to set baud rate
	RP2X_SERIAL_ATTR_FAILURE = -3  // failed to read/set tty attributes
};

//| dev:   device path
//| vtime: port read timeout (vtime * 10 deciseconds)
//| vmin:  port minimum bytes on read (0 to return on any amount read)
//| baud:  baud rate
//|
//| For help understand VTIME and VMIN settings:
//|     http://www.unixwiz.net/techtips/termios-vmin-vtime.html
//|
//| Return: Returns serial port FD on success
//|         See enum of return values above in case of error
//|         All errors should set errno value (not guaranteed)

int rp2x_serial_open(char *dev, int vtime, int vmin, uint baud);
```  
  
# Example
```c
// Open device with 1 second timeout, no minimum read, and 115200 baud.
int serial_port = rp2x_serial_open("/dev/ttyACM0", 10, 0, 115200);
```
