# Embedded_android

## Android Window
  * A window is a Rectangular area which has aone view heirarchy.
  * it has single surafce.
  * A window is basically like you think of a window on the desktop. It has a single Surface in which the contents of the window is rendered. 
    An application interacts with the Window Manager to create windows; the Window Manager creates a Surface for each window and gives it to the 
    application for drawing. The application can draw whatever it wants in the Surface; to the Window Manager it is just an opaque rectangle.
 
 ## am adb command
  * Using activity manager (am)
  * We can issue commands with the activity manager (am) tool to perform various system actions, such as start an activity, force-stop a process,             broadcast an intent, modify the device screen properties, and more. While in a shell, the syntax is:

  ``` am <command> ```
  
  
 * Ref : https://android-doc.github.io/tools/help/shell.html#am



 ## Bitmap
 * A Bitmap is just an interface to some pixel data. 
 * The pixels may be allocated by Bitmap itself when you are directly creating one, or it may be pointing to pixels      it doesn't own such as what internally    happens to hook a Canvas up to a Surface for drawing. (A Bitmap is          created and pointed to the current drawing buffer of the Surface.)


## monkey adb command
  Step 1: First get all the package names of the apps installed in your device, by using:

    ``` adb shell pm list packages ```

  Step 2: You will get all the package names. Copy the one you want to start using ADB.

  Step 3: Add your desired package name in the below command.

    ``` adb shell monkey -p 'your package name' -v 1 ```

For example,
 
    ``` adb shell monkey -p com.estrongs.android.pop -v 500 ```


## NDK
 * The Native Development Kit (NDK) is a set of tools that allows you to use C and C++ code with Android.
 * That provides platform libraries you can use to manage native activities and access physical device components,such as sensors and touch input. 
 
 * However, the NDK can be useful for cases in which you need to do one or more of the following:
    1. Squeeze extra performance out of a device to achieve low latency or run computationally intensive applications, such as games or physics simulations.
    3. Reuse your own or other developers' C or C++ libraries.


## Surface
  * A Surface is an object holding pixels that are being composited to the screen.
  * Every window you see on the screen (a dialog, your full-screen activity, the status bar) has its own surface that it draws in to, 
    and Surface Flinger renders these to the final display in their correct Z-order. 
    
    
    
## Surface Flinger
 * surface flinger is compositing the screen using the last buffer, without needing to wait for the application to finish drawing.


## Screenshot using adb command
 ``` 
   $ adb shell
   shell@ $ screencap /sdcard/screen.png
   shell@ $ exit
   $ adb pull /sdcard/screen.png   
   ```

## Android System profiling:
 * The Android Profiler tools provide real-time data to help you to understand how your app uses CPU, memory, network, and battery resources.


## z-order
 * The term "Z-order" refers to the order of objects along the Z-axis. In coordinate geometry, X typically refers to the horizontal axis (left to right), Y    to the vertical axis (up and down), and Z refers to the axis perpendicular to the other two (forward or backward).
 * Ref : https://stackoverflow.com/questions/4182486/placing-overlappingz-index-a-view-above-another-view-in-android?noredirect=1&lq=1


# NOTES
1. A canvas operates on a Bitmap,  
   Surface gives you a Canvas
   Surface > Canvas > Bitmap

2. 

## Refrences
 * https://stackoverflow.com/questions/4576909/understanding-canvas-and-surface-concepts
 
