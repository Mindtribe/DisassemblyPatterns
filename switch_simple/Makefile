CC=arm-none-eabi-gcc
CFLAGS=-O0 -g -lc -lnosys -mno-thumb-interwork -fomit-frame-pointer
APPNAME=$(shell basename $(shell pwd))
BUILDFOLDER=build

all: $(BUILDFOLDER) $(BUILDFOLDER)/$(APPNAME)

clean: $(BUILDFOLDER)
	@cd $(BUILDFOLDER) && rm -rf $(APPNAME)
	@cd $(BUILDFOLDER) && rm -rf $(basename $(APPNAME)).lst

$(BUILDFOLDER):
	mkdir $(BUILDFOLDER)

$(BUILDFOLDER)/$(APPNAME): main.c
	$(CC) -o $@ $< $(CFLAGS) -Wa,-adchln=$(basename $@).lst
