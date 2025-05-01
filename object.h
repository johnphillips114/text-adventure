#ifndef OBJECT_H
#define OBJECT_H


typedef struct object {
    const char      *description;
    const char      **tags;
    struct object   *location;
    struct object   *destination;
    struct object   *prospect;
    const char      *details;
    const char      *contents;
    const char      *textGo;
    int             weight;
    int             capacity;
    int             health;
} OBJECT;

extern OBJECT objs[];

#endif

#define field	(objs + 0)
#define cave	(objs + 1)
#define silver	(objs + 2)
#define gold	(objs + 3)
#define guard	(objs + 4)
#define player	(objs + 5)
#define intoCave	(objs + 6)
#define exitCave	(objs + 7)

#define endOfObjs	(objs + 8)
