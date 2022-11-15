 #include <stdlib.h>
 #include <unistd.h>
 #include <stdio.h>
 #include <fcntl.h>
 #include <linux/fb.h>
 #include <sys/mman.h>
 #include <sys/ioctl.h>

 int main()
 {
     int fbfd01 = 0, fbfd02 = 0, fbfd03 = 0;


     // Open the file for reading and writing
     fbfd01 = open("/dev/graphics/fb0", O_RDWR);
     if (fbfd01 == -1) {
         perror("Error fb0: cannot open framebuffer device");
         //exit(1);
     }
     else
     	printf("fb0:The framebuffer device was opened successfully.\n");
     
     

     fbfd02 = open("/dev/graphics/fb1", O_RDWR);
     if (fbfd02 == -1) {
         perror("Error fb1: cannot open framebuffer device");
         //exit(1);
     }
     else
     	printf("fb1:The framebuffer device was opened successfully.\n");
     	
     	
     fbfd03 = open("/dev/graphics/fb2", O_RDWR);
     if (fbfd03 == -1) {
         perror("Error fb2: cannot open framebuffer device");
         //exit(1);
     }
     else
     	printf("fb2:The framebuffer device was opened successfully.\n");
     
     return 0;
     
}
