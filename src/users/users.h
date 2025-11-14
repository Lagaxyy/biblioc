#ifndef USERS_H
#define USERS_H

void createUser(char *pseudo, char *password);
void deleteUser(char *pseudo, int isConnected);
int existsUser(char *pseudo, char *password);

#endif

