#ifndef TV_H
#define TV_H

class Tv {
	int size;
public:
	Tv() { size = 20; }
	Tv(int size) { this->size = size; }
	int getSize() { return this->size; }
};

#endif
