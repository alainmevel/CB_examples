#compiler and linker options :
_CC_OPTS=-O -DSY_MSW -DWIN32 -DGEN_EMBEDDED

_LD_LIBS=-lkernel32
_LD_OPTS=-O

#linkers :
_LD=gcc $(_LD_OPTS)

#compiler :
_CC=gcc -c $(_CC_OPTS)

