.PHONY:clean
.PHONY:install
all:
	cd install && make

install:
	cd install && sh install.sh && cd ../sample && make

clean:
	cd install && make clean && cd ../sample && make clean
