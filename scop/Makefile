include .env

CFLAGS = -std=c++17 -I. -I$(VULKAN_SDK_PATH)/include -I$(VULKAN_SDK_PATH)/lib
LDFLAGS = -L$(VULKAN_SDK_PATH)/lib `pkg-config --static --libs glfw3` -lvulkan -lobjc -Wl,-rpath,.

a.out: src/test.cpp
	g++ $(CFLAGS) -o a.out src/test.cpp $(LDFLAGS)

.PHONY: test clean

test: a.out
	./a.out

clean:
	rm -f a.out