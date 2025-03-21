Nombre del compilador
CXX = g++

Flags de compilación
CXXFLAGS = -std=c++98

Directorios de los archivos
INCLUDE_DIR = include
SRC_DIR = src

Archivos fuente
SRC = $(SRC_DIR)/Publicacion.cpp \
      $(SRC_DIR)/ArticuloRevista.cpp \
      $(SRC_DIR)/Libro.cpp \
      $(SRC_DIR)/PaginaWeb.cpp \
      $(SRC_DIR)/Investigador.cpp \
      $(SRC_DIR)/DTFecha.cpp \
      $(SRC_DIR)/DTRefer.cpp \
      main.cpp

Archivos objeto (reemplaza .cpp por .o)
OBJ = $(SRC:.cpp=.o)

Nombre del ejecutable
TARGET = programa

Regla principal para compilar el ejecutable
all: $(TARGET)

Regla para compilar el ejecutable a partir de los archivos objeto
$(TARGET): $(OBJ)
    $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

Regla para compilar cada archivo .cpp a .o
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@ -I$(INCLUDE_DIR)

Limpieza de archivos compilados
clean:
    rm -f $(SRC_DIR)/*.o $(TARGET)
