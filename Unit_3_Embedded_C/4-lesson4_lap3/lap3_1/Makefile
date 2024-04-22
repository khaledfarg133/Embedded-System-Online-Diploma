#@copyright : Khaled

CC=arm-none-eabi-
CFLAGS=-mthumb -mcpu=cortex-m4 -gdwarf-2 -g
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)
Project_name=unit3_lap4_cortexM4


all: $(Project_name).bin

	@echo "============= Build Is Done ============== "

%.o : %.c 
	 $(CC)as.exe $(CFLAGS) $(INCS)  $< -o $@


%.o : %.c 
	$(CC)gcc.exe -c $(CFLAGS) $(INCS)   $< -o $@




$(Project_name).elf: $(OBJ) $(AsOBJ)
	 $(CC)ld.exe -T linker_script.ld  $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	 cp $(Project_name).elf $(Project_name).axf


$(Project_name).bin: $(Project_name).elf
	 $(CC)objcopy.exe -O binary $< $@



clean :
	rm  *.elf *.bin

clean_all:
	rm *.o  *.elf  *.bin 



