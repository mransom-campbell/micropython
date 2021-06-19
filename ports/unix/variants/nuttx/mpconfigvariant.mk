# This is the default variant when you `make` the Unix port.

PROG ?= micropython-nuttx

CFLAGS += \
	-Dmain=micropython_main

MICROPY_PY_FFI = 0