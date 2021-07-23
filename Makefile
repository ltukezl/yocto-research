obj-m := yocto.o

all:
	make -C $(KERNEL_SRC) M=$(PWD)

modules_install:
	make -C $(KERNEL_SRC) M=$(PWD) modules_install

clean:
	make -C $(KERNEL_SRC) M=$(PWD) clean
