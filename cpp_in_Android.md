# Step to Cross Compile c/cpp programme for Android 

1. Compile c program code with statically compile (In Linux-ubuntu native machine)
```
    im-rt-lp-1148@imrtlp1148-Lenovo-V15-G2-ITL-Ua:~/android$ arm-linux-gnueabihf-gcc -static hello.c -o hello_static   
```

3. check
 ```
    im-rt-lp-1148@imrtlp1148-Lenovo-V15-G2-ITL-Ua:~/android$ file hello_static 
 ```

4. push in to Androide board
 ```
    im-rt-lp-1148@imrtlp1148-Lenovo-V15-G2-ITL-Ua:~/android$ adb push hello_static /data/local/tmp
 ```

5. Run 
```
  im-rt-lp-1148@imrtlp1148-Lenovo-V15-G2-ITL-Ua:~/android$ adb devices
  im-rt-lp-1148@imrtlp1148-Lenovo-V15-G2-ITL-Ua:~/android$ adb root
  im-rt-lp-1148@imrtlp1148-Lenovo-V15-G2-ITL-Ua:~/android$ adb shell
    
    msm8953_64:/ # ls  
    msm8953_64:/data/local/tmp # ls
    msm8953_64:/data/local/tmp # ./hello_static                                                                                                       Hello World
                   
```
