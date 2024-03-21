#compiler and linker options :
_CC_OPTS=-O -DGEN_EMBEDDED

_LD_LIBS=-lm -lpthread
_LD_OPTS=-O

#linkers :
_LD=gcc $(_LD_OPTS)

#compiler :
_CC=gcc -c $(_CC_OPTS)

