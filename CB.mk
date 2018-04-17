pos.png vel.png phase.png : CB_graph.py tray.txt
	python3 CB_graph.py

tray.txt : CB_gravity.cpp
	c++ CB_gravity.cpp
	./a.out > tray.txt
