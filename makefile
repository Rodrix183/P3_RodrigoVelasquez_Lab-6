Probando:	Main.o Computadora.o Caja.o Electronico.o Libro.o Producto.o Ropa.o Videojuego.o
	g++ Main.o Computadora.o Caja.o Electronico.o Libro.o Producto.o Ropa.o Videojuego.o -o Probando

Computadora.o:	Computadora.h Computadora.cpp
	g++ -c Computadora.cpp

Caja.o:	Caja.h Caja.cpp
	g++ -c Caja.cpp

Electronico.o:	Electronico.h Electronico.cpp
	g++ -c Electronico.cpp

Libro.o:	Libro.h Libro.cpp
	g++ -c Libro.cpp

Producto.o:	Producto.h Producto.cpp
	g++ -c Producto.cpp

Ropa.o:	Ropa.h Ropa.cpp
	g++ -c Ropa.cpp

Videojuego.o:	Videojuego.h Videojuego.cpp
	g++ -c Videojuego.cpp

Main.o:	Main.cpp
	g++ -c Main.cpp
