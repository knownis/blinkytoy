# makfile configuration
COMMON_OBJECTS  = 
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h 
LDFLAGS = ../lib/libTimer.a -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all: sebsToy.elf 

#additional rules for files
sebsToy.elf: ${COMMON_OBJECTS}  bbmain.o switches.o  led.o buzzer.o song.o wdInterruptHandler.o ../lib/libTimer.a
	${CC} $(CFLAGS) $^ $(LDFLAGS) -o $@ 

load: sebsToy.elf
	mspdebug rf2500 "prog $^"

clean:
	rm -f *.o *.elf

bbmain.o: buzzer.h led.h
led.o: led.h
switches.o: switches.h  buzzer.h song.h
buzzer.o: buzzer.h
wdInterruptHandler.o: buzzer.h led.h switches.h song.h
song.o: song.h

