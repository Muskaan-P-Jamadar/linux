#include<stdio.h>

int main() {
   int pid;
   pid = fork();
   
   // Child process
   if (pid == 0) {
      system("ls");
      sleep(10);
      system("-l");
   } else {
      sleep(3);
   }
   return 0;
}
