#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fuzzme(char *buf)
{
  if(strlen(buf) >= 3)
    if(buf[0] == 'b')
      if(buf[1] == 'u')
        if(buf[2] == 'g') {
          printf("You've got it!");
          abort();
        }
    return 0;
}

//#define BUFSZ 256

<<<<<<< HEAD
int LLVMFuzzerTestOneInput(char* data, size_t size) {
    /*char buf[BUFSZ] = { 0 };
    FILE* f = NULL;
    size_t nr = 0;

    if (2 > argc) {
        fprintf(stderr, "usage: %s PAYLOAD\n", argv[0]);
        return 1;
    }

    f = fopen(argv[1], "rb");
    assert(f);

    nr = fread(buf, sizeof(buf[0]), BUFSZ, f);
    assert(nr > 0);
    buf[BUFSZ-1] = '\0';
	*/
    fuzzme(data);

    //fclose(f);

    return 0;
=======
//#int main(int argc, char** argv)
//#{
//#    char buf[BUFSZ] = { 0 };
//#    FILE* f = NULL;
//#    size_t nr = 0;
//#
//#    if (2 > argc) {
//#        fprintf(stderr, "usage: %s PAYLOAD\n", argv[0]);
//#        return 1;
//#    }
//#
//#    f = fopen(argv[1], "rb");
//#    assert(f);
//#
//#    nr = fread(buf, sizeof(buf[0]), BUFSZ, f);
//#    assert(nr > 0);
//#    buf[BUFSZ-1] = '\0';
//#
//#    fuzzme(buf);
//#
//#    fclose(f);
//#
//#    return 0;
//#}
int LLVMFuzzerTestOneInput(char* data, size_t size){
  fuzzme(data);
  return 0;
>>>>>>> 7fe6100fd8f48dd084ca8b81b9ef702f89dc9776
}
