# Nombre del ejecutable
output: main.o DTFecha.o DTRefer.o Publicacion.o PaginaWeb.o Libro.o Investigador.o ArticuloRevista.o
	g++ -std=c++98 main.o DTFecha.o DTRefer.o Publicacion.o PaginaWeb.o Libro.o Investigador.o ArticuloRevista.o -o output

# Compilar cada archivo fuente
main.o: main.cpp include/*.h
	g++ -std=c++98 -c main.cpp

DTFecha.o: src/DTFecha.cpp include/DTFecha.h
	g++ -std=c++98 -c src/DTFecha.cpp

DTRefer.o: src/DTRefer.cpp include/DTRefer.h
	g++ -std=c++98 -c src/DTRefer.cpp

Publicacion.o: src/Publicacion.cpp include/Publicacion.h
	g++ -std=c++98 -c src/Publicacion.cpp

PaginaWeb.o: src/PaginaWeb.cpp include/PaginaWeb.h
	g++ -std=c++98 -c src/PaginaWeb.cpp

Libro.o: src/Libro.cpp include/Libro.h
	g++ -std=c++98 -c src/Libro.cpp

Investigador.o: src/Investigador.cpp include/Investigador.h
	g++ -std=c++98 -c src/Investigador.cpp

ArticuloRevista.o: src/ArticuloRevista.cpp include/ArticuloRevista.h
	g++ -std=c++98 -c src/ArticuloRevista.cpp
	# Limpiar archivos compilados
clean:
	rm -f *.o output