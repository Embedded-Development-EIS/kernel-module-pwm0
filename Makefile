
KERNEL_SRC ?= "/lib/modules/$(shell uname -r)/build"

obj-m += pwm0.o

all:
	$(MAKE) -C $(KERNEL_SRC) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNEL_SRC) M=$(PWD) clean
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions

modules_install:
	$(MAKE) -C $(KERNEL_SRC) M=$(PWD) modules_install
