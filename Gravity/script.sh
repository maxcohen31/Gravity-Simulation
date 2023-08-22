#! /bin/bash

g++ -Iinclude -c src/body.cpp -o body.o
g++ -Iinclude -c src/planet.cpp -o planet.o
g++ -Iinclude -c main.cpp -o main.o
g++  main.o body.o planet.o -o gravity_simulation -lsfml-graphics -lsfml-window -lsfml-system
