.POSIX:

demo: main.c defer.h
	$(CC) main.c -o $@ $(CPPFLAGS) $(CFLAGS) $(LDFLAGS)

clean:
	rm demo

.PHONY: clean
