objects = src/mhm8.c src/run.c src/assemble.c
targets = compiled/mhm8

all: $(objects)
	@ls | grep compiled > /dev/null || mkdir compiled

mhm8: $(objects)
	cc src/mhm8.c -o compiled/mhm8
