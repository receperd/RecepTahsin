# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Directories
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build
ASSETS_DIR = assets

# Output
TARGET = $(BUILD_DIR)/TreasureHuntGame

# Source and Object Files
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

# Default Target
all: $(TARGET)

# Build Target
$(TARGET): $(OBJECTS) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Create Build Directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean Up
clean:
	rm -rf $(BUILD_DIR)

# Copy Assets
copy-assets: | $(BUILD_DIR)
	cp -r $(ASSETS_DIR) $(BUILD_DIR)

# Run Game
run: all copy-assets
	./$(TARGET)

# Phony Targets
.PHONY: all clean run copy-assets
