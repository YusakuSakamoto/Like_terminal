#! /bin/bash
g++ -c Like_terminal.cpp -o Like_terminal.o
ar r /usr/local/lib/sakamoto/libsakamoto.a Like_terminal.o
sudo cp *.h /usr/local/include/sakamoto/
sudo cp *.pc /usr/lib/pkgconfig/
cd /usr/local
sudo mkdir include/sakamoto
sudo mkdir lib/sakamoto
sudo mkdir bin/sakamoto
echo "installation complete"