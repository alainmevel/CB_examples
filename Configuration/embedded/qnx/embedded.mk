#compiler and linker options :
_CC_OPTS=-O -DGEN_EMBEDDED

_LD_LIBS=-lm
_LD_OPTS=-O

#linkers :
_LD=qcc $(_LD_OPTS)

#compiler :
_CC=qcc -c $(_CC_OPTS)

