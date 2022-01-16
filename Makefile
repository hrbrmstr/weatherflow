# replace this with yours if you want to codesign your own binary
IDENTITY="CBY22P58G8"

weatherflow-macos:
	$(CXX) weatherflow.cpp -o x86_app -target x86_64-apple-macos10.12
	$(CXX) weatherflow.cpp -o arm_app -target arm64-apple-macos11
	lipo -create -output weatherflow x86_app arm_app && rm x86_app arm_app

weatherflow:
	$(CXX) weatherflow.cpp -o weatherflow

leaks: weatherflow
	@./test.bash

sign: weatherflow
	codesign --force --verify --verbose --sign ${IDENTITY} weatherflow

clean:
	rm -f weatherflow

install-mac: weatherflow
	codesign --force --verify --verbose --sign ${IDENTITY} weatherflow
	cp weatherflow /usr/local/bin

install: weatherflow
	cp weatherflow /usr/local/bin
