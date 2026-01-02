
reldeb:
	cmake --build ./build/ --verbose --config RelWithDebInfo

release:
	cmake --build ./build/ --verbose --config Release

debug:
	cmake --build ./build/ --verbose --config Debug

test_reldeb:
	ctest --verbose --test-dir ./build -C RelWithDebInfo

test_release:
	ctest --verbose --test-dir ./build -C Release

test_debug:
	ctest --verbose --test-dir ./build -C Debug

config:
	cmake -B ./build -S . -G "Ninja Multi-Config"

.PHONY:
	config debug reldeb release test_debug test_reldeb test_release
	
