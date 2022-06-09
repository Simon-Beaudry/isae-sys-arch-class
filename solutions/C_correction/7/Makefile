_LOG = $(if $(LOG),>$@.log 2>&1,)
CC = gcc
CFLAGS = -std=c99 -Wall -g
LDFLAGS = -lm
CC_EXEC = $(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

TARGETS = ./prog-pascal

all: $(TARGETS)

prog-pascal: prog-pascal.c pascal.c | pascal.h
	$(if $(LOG),-,) $(CC_EXEC) $(_LOG)

%: %.c
	$(if $(LOG),-,) $(CC_EXEC) $(_LOG)

clean:
	find . -type f -executable -delete
	$(if $(LOG),rm -f **/*.log,)
