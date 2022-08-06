
LIB_DIR = C:\Users\88698\Documents\SFML-2.5.1\lib
LIBS = -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32
INCLUDE_DIR = C:\Users\88698\Documents\SFML-2.5.1\include
NO_CONSOLE = -mwindows

default:
	echo "\n\nrun make (os)\nrun make windows or make linux\nor choose your os' Makefile (Makefile_windows or Makefile_linux) \nand type \"make -f Makefile_windows\" or \"make -f Makefile_linux\"\n"

windows:
	g++ -c main.cpp -DSFML_STATIC -I$(INCLUDE_DIR)
	g++ main.o -o win_main -L$(LIB_DIR) $(LIBS)


linux:
	g++ -c main.cpp
	g++ main.o -o main -lsfml-graphics -lsfml-window -lsfml-system

