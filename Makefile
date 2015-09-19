.PHONY:clean
.PHONY:install
all:
	cd install && make && sh install.sh

clean:
	cd install && make clean && cd ../sample && make clean
