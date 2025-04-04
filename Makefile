CC=gcc
CFLAGS=-Wall -Wextra
INSTALL_DIR=/usr/local/bin

all: ip

ip: src/IPTool.c
	$(CC) $(CFLAGS) -o bin/$@ $<

install: all
	sudo cp bin/ip $(INSTALL_DIR)
	sudo chmod +x $(INSTALL_DIR)/ip

clean:
	rm -f bin/ip
	rm -f /usr/local/bin/ip

.PHONY: all install clean