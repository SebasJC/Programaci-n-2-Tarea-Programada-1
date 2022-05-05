FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/tipoEnvio.cpp -o bin/tipoEnvio.o
	g++ $(FLAGS) src/envioPostal.cpp -o bin/envioPostal.o
	g++ $(FLAGS) src/envioFedEx.cpp -o bin/envioFedEx.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/envios bin/envioPostal.o bin/envioFedEx.o bin/main.o bin/tipoEnvio.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/tests_envios_enviosPostales.cpp -o bin/tests_envios_enviosPostales.o
	g++ $(FLAGS) tests/tests_envios_enviosFedEx.cpp -o bin/tests_envios_enviosFedEx.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/tests bin/tests_envios_enviosPostales.o bin/tests_envios_enviosFedEx.o bin/main.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin
