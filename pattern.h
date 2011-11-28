#ifndef PROTOBUF_C_PATTERN_H
#define PROTOBUF_C_PATTERN_H

#include "pbc.h"
#include "context.h"
#include "array.h"

struct _pattern_field {
	int id;
	int offset;
	int ptype;
	int ctype;
	pbc_var defv;
};

struct pbc_pattern {
	int count;
	struct _pattern_field f[1];
};

#endif