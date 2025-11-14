#ifndef USERS_H
#define USERS_H

#include <sqlite3.h>

void createUser(char *pseudo, char *password);
void deleteUser(char *pseudo);
int existsUser(char *pseudo);

#endif /* USERS_H */
