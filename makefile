Tum: derleme baglama calistirma

derleme:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/ikiliaramaagaci.cpp -o ./lib/ikiliaramaagaci.o
	g++ -c -I "./include" ./src/hucre.cpp -o ./lib/hucre.o
	g++ -c -I "./include" ./src/organ.cpp -o ./lib/organ.o
	g++ -c -I "./include" ./src/organizma.cpp -o ./lib/organizma.o
	g++ -c -I "./include" ./src/queue.cpp -o ./lib/queue.o
	g++ -c -I "./include" ./src/radix.cpp -o ./lib/radix.o
	g++ -c -I "./include" ./src/doku.cpp -o ./lib/doku.o
	g++ -c -I "./include" ./src/sistem.cpp -o ./lib/sistem.o
	g++ -c -I "./include" ./src/dosyaoku.cpp -o ./lib/dosyaoku.o
	g++ -c -I "./include" ./src/kontrol.cpp -o ./lib/kontrol.o
	g++ -c -I "./include" ./src/test.cpp -o ./lib/test.o
	
baglama:
	g++ ./lib/doku.o ./lib/test.o ./lib/kontrol.o ./lib/dosyaoku.o ./lib/ikiliaramaagaci.o ./lib/hucre.o ./lib/organ.o ./lib/organizma.o ./lib/queue.o ./lib/radix.o ./lib/sistem.o ./lib/main.o -o ./bin/program
calistirma:
	./bin/program