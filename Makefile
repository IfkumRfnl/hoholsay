output: hoholsay

hoholsay: main.c
	$(CC) main.c -o hoholsay

clean: 
	rm -rf hoholsay

install: hoholsay
	cp hoholsay /usr/local/bin

remove:
	rm -rf /usr/local/bin/hoholsay
