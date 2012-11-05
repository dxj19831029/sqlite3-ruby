#ifndef SQLITE3_DATABASE_RUBY
#define SQLITE3_DATABASE_RUBY

#include <sqlite3_ruby.h>

struct _sqlite3Ruby {
  sqlite3 *db;
  int busy_timeout;
  int total;
  int immd; // defines as if we want to return immedicately when busy handler is called.
};

typedef struct _sqlite3Ruby sqlite3Ruby;
typedef sqlite3Ruby * sqlite3RubyPtr;

void init_sqlite3_database();

#endif
