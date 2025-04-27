#ifndef NOUN_H
#define NOUN_H

#include <wchar.h>
extern OBJECT *getVisible(const char *intention, const char *noun);
extern OBJECT *getPossession(OBJECT *from, const char *verb, const char *noun);

#endif
