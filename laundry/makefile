compile:
	g++ -c main.cpp -o build/main.o
	g++ -c ./global/function.cpp -o build/function.o

	g++ -c ./tampilan/utama/utama.cpp -o build/utama.o
	g++ -c ./tampilan/form/detail.cpp -o build/detail.o
	g++ -c ./tampilan/component.cpp -o build/component.o
	g++ -c ./tampilan/harga/harga.cpp -o build/harga.o
	g++ -c ./tampilan/transaksi/transaksi.cpp -o build/transaksi.o
	g++ -c ./tampilan/rekap/rekap.cpp -o build/rekap.o
	g++ -c ./tampilan/pengambilan/pengambilan.cpp -o build/pengambilan.o

	g++ build/main.o \
		build/utama.o \
		build/function.o \
		build/detail.o \
		build/component.o \
		build/harga.o \
		build/transaksi.o \
		build/rekap.o \
		build/pengambilan.o \
		-o laundry

launch:
	make compile
	./laundry