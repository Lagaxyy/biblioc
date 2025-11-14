#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "helpers.h"

char *trim(const char *s) {
  size_t i;
  int spaces_leading, spaces_trailing;
  char *trimmed_s;

  trimmed_s = calloc(strlen(s) + 1, sizeof(char));

  spaces_leading = 0;
  spaces_trailing = strlen(s);

  while (isspace(s[spaces_leading]) != 0) {
    spaces_leading++;
  }
  while (isspace(s[spaces_trailing - 1]) != 0) {
    spaces_trailing--;
  }

  for (i = 0; i < spaces_trailing; i++) {
    trimmed_s[i] = s[i + spaces_leading];
  }
  trimmed_s[i - spaces_leading] = '\0';

  return trimmed_s;
}
