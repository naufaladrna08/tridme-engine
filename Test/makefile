%.o: %.cpp
	g++ -g -c $^ -o $@ -I ../Includes

%.o: %.c
	gcc -g -c $^ -o $@ -I ../Includes

main: main.o glad.o stb_image.o
	g++ -o $@ $^ -I ../Includes ../Lib/libcore.so -lglfw3 -lGL -lXrandr -lX11 -lXi -ldl -lpthread

debug: main.o glad.o stb_image.o
	g++ -g -o $@ $^ -I ../Includes ../Lib/libcore.so -lglfw3 -lGL -lXrandr -lX11 -lXi -ldl -lpthread

clean: 
	rm -rf main.o glad.o stb_image.o main debug libcore.so