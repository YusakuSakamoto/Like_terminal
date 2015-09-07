#! /bin/bash
ar r /usr/local/lib/sakamoto/libsakamoto.a Like_terminal.o
sudo cp *.h /usr/local/include/sakamoto/
sudo rm /usr/lib/pkgconfig/sakamoto.pc
sudo cp *.pc /usr/lib/pkgconfig/
echo "installation complete"
