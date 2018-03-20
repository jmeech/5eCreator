CXX       := g++
CXXFLAGS  := -Wall -g -std=c++14

SRCDIR    := src
TARGETDIR := bin
SOURCES   := $(shell find $(SRCDIR) -type f -name *.cpp)

BIN       := dungeons
TARGET    := $(TARGETDIR)/$(BIN)

$(TARGET): $(SOURCES)
	@mkdir -p $(TARGETDIR)
	@echo "Linking..."
	@echo "  Linking $(TARGET)"; $(CXX) $(CXXFLAGS) $^ -o $(TARGET)