#compiler and linker options :
_CC_OPTS=-O -DGEN_EMBEDDED

_LD_LIBS=-lm
_LD_OPTS=-O

#linkers :
_LD=arm-none-linux-gnueabi-gcc $(_LD_OPTS)

#compiler :
_CC=arm-none-linux-gnueabi-gcc -c $(_CC_OPTS)

