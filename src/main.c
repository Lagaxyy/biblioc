/**
 * TODO:
 *  - faire un tokenizer dans le helpers
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "helpers/helpers.h"
#include "users/users.h"

#define COMMAND_HELP "help"
#define COMMAND_QUIT "quit"
#define COMMAND_SIGNUP "signup"
#define LINE_BUFFER_SIZE 128

#define SCMP(A, B) (strcmp(A, B) == 0)

/*
void signup() { createUser(); }

void commands(const char *command) {
  if (SCMP(COMMAND_SIGNUP, command)) {
    signup();
  }
}
*/

int main(int argc, char *argv[]) {
  char line_buffer[LINE_BUFFER_SIZE];

  while (fgets(line_buffer, LINE_BUFFER_SIZE, stdin) != NULL) {
    char *trimmed;

    /* Enlève le '\n' dans le buffer */
    line_buffer[strlen(line_buffer) - 1] = '\0';

    trimmed = trim(line_buffer);

    /* Quitte le programme */
    if (SCMP(COMMAND_QUIT, line_buffer)) {
      free(trimmed);
      break;
    }

    printf("command: &%s&\n", trimmed);

    free(trimmed);
  }

  return 0;
}
