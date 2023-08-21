CC = g++
PROGRAM = ConnectTrees

IDIR = ./

_DEPS   = NewTree.h NominalTree.h
DEPS    = $(patsubst %,/%,$(_DEPS))


_SRC    = NewTree.C
SRC     = $(patsubst %,/%,$(_SRC))


ROOTCFLAGS   := $(shell root-config --cflags)
ROOTLDFLAGS  := $(shell root-config --ldflags)
ROOTLIBS     := $(shell root-config --libs)

LDFLAGS       = -O $(ROOTLDFLAGS)
LIBS         += $(ROOTLIBS) $(ROOTGLIBS)
CFLAGS       += -O -Wall -fPIC $(ROOTCFLAGS)
CFLAGS       += -I$(IDIR)
CFLAGS       += -g

all : $(PROGRAM)

%.o: %.C $(DEPS) $(SRC)
	$(CC) -c -g -o $@ $< $(CFLAGS)

$(PROGRAM): %: ConnectTrees.C
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS) $(LIBS)


test:
	echo $(PATH)
