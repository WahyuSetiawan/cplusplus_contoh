compile:
	g++ -c main.cpp -o build/main.o
	g++ -c ./tampilan/tampilan.cpp -o build/tampilan.o
	g++ -c ./global/function.cpp -o build/function.o
	g++ -c ./tampilan/form/detail.cpp -o build/detail.o
	g++ build/main.o \
		build/tampilan.o \
		build/function.o \
		build/detail.o \
		-o laundry

launch:
	make compile
	./laundry