include .env

CFLAGS = -std=c++17 -I. -I$(VULKAN_SDK_PATH)/include -I$(VULKAN_SDK_PATH)/lib
MACFLAGS = $(CFLAGS) -DMACOS=1
LDFLAGS = -L$(VULKAN_SDK_PATH)/lib `pkg-config --static --libs glfw3` -lvulkan -Wl,-rpath,. -lGL -lglut -I$(HOME)/glm

a.out: src/test.cpp
	g++ $(CFLAGS) -o a.out src/test.cpp $(LDFLAGS)

macos_a.out: src/test.cpp
	g++ $(MACFLAGS) -o a.out src/test.cpp $(LDFLAGS)

macos: macos_a.out
		./a.out

.PHONY: test clean

test: a.out
	./a.out

clean:
	rm -f a.out