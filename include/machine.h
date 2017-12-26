#ifndef MACHINE_H
#define MACHINE_H

#include <stdlib.h>
#include "constant.h"

struct frame {
	struct value *vars;
	size_t num;
	size_t address;
};

struct vm {
	struct instruction *code;
	size_t ip;

	struct value *stack;
	size_t sp;

	struct frame **frames;
	size_t fp;

	struct constant_table *ct;
	struct reporter *r;
};

struct frame *new_frame();

#endif
