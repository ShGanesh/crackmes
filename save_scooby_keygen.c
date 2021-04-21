#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

int main() {
   char cwd[PATH_MAX];
   char local_1028[4108];
   size_t sVar1;
   int local_18;
   int local_c;
   
   getcwd(local_1028, 0x1000);
   sVar1 = strlen(local_1028);
   local_18 = (int)sVar1;
   printf("sVar1: %ld\n", sVar1);
   printf("Local: %s\n", local_1028);
   printf("(int)sVar1: %c\n", local_18);
   local_c = 0;
   
   while (local_c < local_18) {
    if (local_1028[local_c] == '/') {
      local_1028[local_c] = '$';
    }
    else {
      if ((local_1028[local_c] < 'a') || ('z' < local_1028[local_c])) {
        if (('@' < local_1028[local_c]) && (local_1028[local_c] < '[')) {
          local_1028[local_c] = local_1028[local_c] + '\x1e';
        }
      }
      else {
        local_1028[local_c] = local_1028[local_c] + -0x1e;
      }
    }
    local_c = local_c + 1;
  }
  printf("Key: %s\n", local_1028);
