obj-m := yocto.o
VER = $(shell uname -r)

all:
	make -C $(KERNEL_SRC) M=$(PWD) modules

modules_install:
	make -C $(KERNEL_SRC) M=$(SRC) modules_install

clean:
	make -C $(KERNEL_SRC) M=$(PWD) clean
