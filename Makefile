main:
	mkdir -p out && cc -o out/main main.c

install:
	cp out/main /usr/local/bin/rock-paper-scissors

uninstall:
	rm /usr/local/bin/rock-paper-scissors

clean:
	rm -rf out