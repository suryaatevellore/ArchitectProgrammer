CFLAGS=-Wall -g

clean:
	rm CenFah

all: CenFah
	cc CenFah.c -o CenFah