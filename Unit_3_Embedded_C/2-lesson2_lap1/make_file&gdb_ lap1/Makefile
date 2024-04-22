#@copyright : Khaled

CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
Project_name=learn_in_depth


all: $(Project_name).bin

	@echo "============= Build Is Done ============== "

startup.o: startup.s
	 $(CC)as.exe $(CFLAGS) $(INCS)  $< -o $@


%.o : %.c 
	$(CC)gcc.exe -c $(CFLAGS) $(INCS)   $< -o $@




$(Project_name).elf: $(OBJ) $(AsOBJ)
	 $(CC)ld.exe -T linker_script.ld  $(LIBS) $(OBJ) $(AsOBJ) -o $@


$(Project_name).bin: $(Project_name).elf
	 $(CC)objcopy.exe -O binary $< $@



clean :
	rm  *.elf *.bin

clean_all:
	rm *.o  *.elf  *.bin 



