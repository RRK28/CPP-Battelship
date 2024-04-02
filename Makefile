CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic
SDLFLAGS = -lSDL2

SRCDIR = src
INCDIR = include
BUILDDIR = build
TARGET = bataille_navale_texte

SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SRCS))
INC = -I$(INCDIR)

.PHONY: all clean

all: $(BUILDDIR) $(TARGET)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INC) $^ -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@
	
clean:
	$(RM) $(BUILDDIR)/*.o $(TARGET)