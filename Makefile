calor.png: calor.dat
	python calor.py 

calor.dat: datos.x
	./datos.x > calor.dat

datos.x: calor.cpp
	c++ calor.cpp -o datos.x