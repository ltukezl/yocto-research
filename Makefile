obj-m := yocto.o
VER = $(shell uname -r)

all:
	make -C /lib/modules/$(VER)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(VER)/build M=$(PWD) clean
