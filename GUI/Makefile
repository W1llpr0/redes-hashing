# Definir variables
CC = g++
CFLAGS = -I"D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\include"
LDFLAGS = -L"D:\PROYECTOS_GABO\redes-hashing\glfw-3.4\build\src" -lglfw3 -lopengl32 -lgdi32
SRC = GUI.cpp
OUT = app.exe

# Regla por defecto (compilar y enlazar el ejecutable)
all: $(OUT)

# Compilar el ejecutable
$(OUT): $(SRC)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

# Limpiar los archivos generados
clean:
	del $(OUT)

