rWildcard=$(foreach pdir,$(wildcard $(1:=/*)),$(call rWildcard,$(pdir),$2) $(filter $2,$(pdir)))

BINDIR := bin
OBJDIR := obj

APPDIR := app

SRCDIR := $(APPDIR)/src
SRCS := $(filter-out %.tmp.cpp, $(strip $(call rWildcard, $(SRCDIR), %.cpp)))
OBJS := $(strip $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.obj, $(SRCS)))

OUT := $(BINDIR)/Win32ML.exe

CXX := g++
CXXFLAGS := -I$(APPDIR)/inc/ -Wall -ggdb3

LXXFLAGS = # nothing

all: $(OUT)

$(OUT): $(OBJS)
	mkdir -p $(@D)
	$(CXX) $(OBJS) -o $(OUT) $(LXXFLAGS)

$(OBJDIR)/%.obj: $(SRCDIR)/%.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $^ -o $@

rall: all run

run:
	./$(OUT)

clean:
	rm -rf $(OBJDIR) $(BINDIR)

.PHONY : all rall run clean